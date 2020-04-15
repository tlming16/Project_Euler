package main

import (
    "fmt"
    "image"
    "image/color"
    "image/png"
    "math"
    "os"
)

type Circle struct {
    X, Y, R float64
}

func (c *Circle) Brightness(x, y float64) uint8 {
    var dx, dy float64 = c.X - x, c.Y - y
    d := math.Sqrt(dx*dx+dy*dy) / c.R
    if d > 1 {
        return 0
    } else {
        return 255
    }
}

func main() {
    var w, h int = 280, 240
    var hw, hh float64 = float64(w / 2), float64(h / 2)
    r := 40.0
    θ := 2 * math.Pi / 3
    cr := &Circle{hw - r*math.Sin(0), hh - r*math.Cos(0), 60}
    cg := &Circle{hw - r*math.Sin(θ), hh - r*math.Cos(θ), 60}
    cb := &Circle{hw - r*math.Sin(-θ), hh - r*math.Cos(-θ), 60}

    m := image.NewRGBA(image.Rect(0, 0, w, h))
    for x := 0; x < w; x++ {
        for y := 0; y < h; y++ {
            c := color.RGBA{
                cr.Brightness(float64(x), float64(y)),
                cg.Brightness(float64(x), float64(y)),
                cb.Brightness(float64(x), float64(y)),
                255,
            }
            m.Set(x, y, c)
        }
    }

    f, err := os.OpenFile("rgb.png", os.O_WRONLY|os.O_CREATE, 0600)
    if err != nil {
        fmt.Println(err)
        return
    }
    defer f.Close()
    png.Encode(f, m)
}