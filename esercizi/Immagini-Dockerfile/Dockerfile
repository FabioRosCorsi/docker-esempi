FROM alpine:3.8

# https://pkgs.alpinelinux.org/packages
RUN apk add --no-cache g++

RUN mkdir sorgenti
WORKDIR sorgenti

COPY cpp_files/HelloWorld.cpp .

RUN g++ HelloWorld.cpp \
    && mv a.out ..

WORKDIR /
RUN ["rm", "-r", "sorgenti"]

ENTRYPOINT [ "./a.out" ]
CMD [ "test" ]
