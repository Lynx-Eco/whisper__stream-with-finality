./build/bin/main -oj -sow -ps -m models/ggml-large.bin -f 16k_beffjezos.wav -ml 1 -of lexBez.offline

# later on output from jq
cat lexBez.offline.json | jq '.transcription[] | {from: .timestamps.from, text: .text}'
