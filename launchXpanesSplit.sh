xpanes -c "{}" 'nc -l 42000' 'nc -l 42001' 'nc -l 42002' './build/bin/stream-with-finality -m ./models/ggml-large.bin  --step 100 --length 10000 -c 5'
