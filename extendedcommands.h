void
toggle_signature_check();

void
show_choose_zip_menu();

char**
<<<<<<< HEAD
gather_files(const char* directory, const char* fileExtensionOrDirectory, int* numFiles);
=======
gather_files(const char* basedir, const char* fileExtensionOrDirectory, int* numFiles);
>>>>>>> 23a5a3e9cefda7859d475b1fbb897dea51a55ca8

char*
choose_file_menu(const char* basedir, const char* fileExtensionOrDirectory, const char* headers[]);

int
get_filtered_menu_selection(const char** headers, char** items, int menu_only, int initial_selection, int items_count);

<<<<<<< HEAD
void
=======
int
>>>>>>> 23a5a3e9cefda7859d475b1fbb897dea51a55ca8
write_string_to_file(const char* filename, const char* string);

int
do_nandroid_backup(const char* backup_name);

int
do_nandroid_restore();

void
show_nandroid_restore_menu(const char* path);

void
choose_default_backup_format();

int
show_nandroid_menu();

int
show_partition_menu();

int
install_zip(const char* packagefilepath);

int
__system(const char *command);

int
show_advanced_menu();

int format_device(const char *device, const char *path, const char *fs_type);

int format_unknown_device(const char *device, const char* path, const char *fs_type);

void format_sdcard(const char* volume);

void partition_sdcard(const char* volume);

void create_fstab();

int has_datadata();

void handle_failure(int ret);

void process_volumes();

int show_install_update_menu();

int confirm_selection(const char* title, const char* confirm);

int run_and_remove_extendedcommand();

int verify_root_and_recovery();

void write_recovery_version();

void free_string_array(char** array);

int can_partition(const char* volume);

static int is_path_mounted(const char* path);

int volume_main(int argc, char **argv);

void show_advanced_power_menu();

#ifdef RECOVERY_EXTEND_NANDROID_MENU
void extend_nandroid_menu(char** items, int item_count, int max_items);
void handle_nandroid_menu(int item_count, int selected);
#endif
