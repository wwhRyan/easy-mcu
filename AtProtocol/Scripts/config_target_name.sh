#!/bin/bash
scripts_path=$(cd `dirname $0`; pwd)
package_name=$(basename $(dirname $scripts_path))

#Users can define their own target names.
usr_src_target_name=$package_name
usr_test_target_name="test_"$usr_src_target_name
usr_example_target_name="example_"$usr_src_target_name

# Replace the [YOUR_XXX_TARGET_NAME] ---> usr_xxx_target_name in every BUILD files.
sed -i "s/\[YOUR_SRC_TARGET_NAME\]/${usr_src_target_name}/g" $scripts_path/../BUILD
sed -i "s/\[YOUR_TEST_TARGET_NAME\]/${usr_test_target_name}/g" $scripts_path/../BUILD
sed -i "s/\[YOUR_EXAMPLE_TARGET_NAME\]/${usr_example_target_name}/g" $scripts_path/../BUILD


echo "scripts_path:               $scripts_path" 
echo "package_name:               $package_name" 
echo "usr_src_target_name:        $usr_src_target_name" 
echo "usr_test_target_name:       $usr_test_target_name" 
echo "usr_example_target_name:    $usr_example_target_name" 
