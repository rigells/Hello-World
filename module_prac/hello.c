#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/miscdevice.h>

static ssize_t read(struct file *file, char __user *user, size_t size, loff_t *o)
{
	return 0;
}

static ssize_t write(struct file *file, const char __user *in, size_t size, loff_t *off)
{
	return 0;
}

static struct file_operations hellomisc_fops = {
	.owner = THIS_MODULE,
	.write = write,
	.read = read,
};
static struct miscdevice hellomisc_dev = {
	.minor = MISC_DYNAMIC_MINOR,
	.name = "hellomisc",
	.fops = &hellomisc_fops,
};

int __init init_hello(void)
{
	printk(KERN_ALERT "[Module Message] hello, Misc Module.\n");
	return misc_register(&hellomisc_dev);
}

void __exit exit_hello(void)
{
	printk(KERN_ALERT "[Module Message] Bye, Hello Misc Module  \n");
	misc_deregister(&hellomisc_dev);
}
module_init(init_hello);
module_exit(exit_hello);
MODULE_LICENSE("GPL");
