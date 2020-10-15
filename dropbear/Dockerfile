FROM alpine

RUN apk add --no-cache dropbear 

COPY files/ssh/authorized_keys /root/.ssh/authorized_keys

RUN mkdir -p /etc/dropbear
RUN chmod -R 0700 /root/.ssh

CMD /usr/sbin/dropbear -F -Rsgjk
