#/bin/bash

cd stack
make test
rm *.x
cd ..

cd list
make test
rm *.x
cd ..

cd queue
make test
rm *.x
cd ..
