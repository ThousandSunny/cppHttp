include_directories(./)

add_executable(client Client.cpp main.cpp HttpClient.cpp HttpConfig.cpp Call.cpp Call.h Request.cpp Request.h Response.cpp Response.h Callback.cpp Callback.h Url.cpp Url.h Dispatcher.cpp Dispatcher.h HttpCodec.cpp HttpCodec.h Http1Codec.cpp Http1Codec.h RequestLine.cpp RequestLine.h StatusLine.cpp StatusLine.h StreamLineReader.cpp StreamLineReader.h HttpCommon.h)

# 链接 easylog
target_link_libraries(client easylog)