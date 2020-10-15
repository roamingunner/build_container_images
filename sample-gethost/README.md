# gethost

get host through `uname -a`

## build

docker buildx build -t roamingunner/sample-gethost --platform=linux/arm/v7,linux/arm64 . --push

## run

### arm platfrom

docker run --rm roamingunner/sample-gethost@sha256:cfdf8caf283db756a5b713a8b1a53b780eb7fa3e4691caa2fe1b419e55b53c97

### aarch64 platfrom

docker run --rm roamingunner/sample-gethost@sha256:83e5d3c10283c689a665073f2e994bda035c66ad659a7ad84b820fc928ffd729


