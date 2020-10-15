# Docker Alpine Dropbear

Container running Alpine Linux with Dropbear SSH

## Dropbear SSH Configuration:

* Port: 22
* Host Key Path: /etc/dropbear/
* Disabled Settings:
  * Password Logins (Root & Any User)
  * Local Port Forwarding
  * Remote Port Forwarding


## Installed Packages:

* Dropbear SSH

## Usage:

### build

 * Paste your SSH public key in `files/ssh/authorized_keys`
 * docker buildx build -t roamingunner/dropbear --platform=linux/arm/v7,linux/arm64 . --push

### run

 * for server:`docker run -d roamingunner/dropbear`
 * for client:`dbclient -i -y id_rsa root@<server ip>`
 * maybe you should `rm ~/.ssh/known_hosts`
