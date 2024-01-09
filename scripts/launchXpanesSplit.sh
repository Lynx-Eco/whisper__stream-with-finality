xpanes -c "{}" \
    './build/bin/stream-with-finality -m ./models/ggml-base.bin --confirmed-tokens-port 42000 --raw-port 42001 --giovanni-prompt-port 42010  --step 250 --length 10000 -c 1' \
    'socat -u UDP-RECV:42000,bind=0.0.0.0 -' \
    'socat -u UDP-RECV:42001,bind=0.0.0.0 -' \
    'socat -u UDP-RECV:42010,bind=0.0.0.0 -'
