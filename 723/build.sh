MAIN_MODULE="CruiseController"

mkdir -p Build
find src/ -maxdepth 1 -iname "*.strl" -not -name "$MAIN_MODULE.strl" -exec cat {} +> Build/$MAIN_MODULE.strl
cat "src/$MAIN_MODULE.strl" >> "Build/$MAIN_MODULE.strl"
find src/ -name \*.h -exec cp {} Build \;
find src/ -name \*.c -exec cp {} Build \;
cp src/Makefile Build/Makefile
cd Build
make CruiseController.xes
cd ..
