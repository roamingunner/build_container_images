FROM gcc AS builder
WORKDIR /home
COPY gethost.cc .
RUN g++ gethost.cc -o gethost -static && strip gethost
 
FROM busybox
WORKDIR /home
COPY --from=builder /home/gethost .
CMD ["/home/gethost"]
