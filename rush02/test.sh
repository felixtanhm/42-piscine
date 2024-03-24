BINARY=rush-02

TEST_DIR=tests

TEST_FILE=test.sh
OUTPUT_FILE=output.txt
EXPECT_FILE=expect.txt

RED_COLOR='\033[0;31m'
BLUE_COLOR='\033[0;34m'
RESET_COLOR='\033[0m'

root_dir=$(pwd)

for case in ${TEST_DIR}/*; do
  cd $case

  # Print test case
  printf $BLUE_COLOR
  echo
  echo "=== ${case} ==="
  printf $RESET_COLOR
  cat $TEST_FILE

  # Run test case
  BINARY="${root_dir}/${BINARY}" sh $TEST_FILE > $OUTPUT_FILE

  # Compare expect with output
  printf $RED_COLOR
  diff -u $EXPECT_FILE $OUTPUT_FILE
  printf $RESET_COLOR

  cd $root_dir
done
