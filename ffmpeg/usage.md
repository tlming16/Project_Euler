## ffmpeg

- 截取视频片段 

```
ffmpeg -i input.mp4 -vcodec copy -acodec copy -ss 00:00:10 -to 00:00:15 output.mp4 -y
```



