FROM gcc:latest
WORKDIR /app 
COPY zbir.c .
RUN gcc -o zbir zbir.c
CMD ["./zbir"]
