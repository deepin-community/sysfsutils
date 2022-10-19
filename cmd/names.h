/*
 *      The PCI Library
 *
 *      Copyright (c) 1997--2002 Martin Mares <mj@ucw.cz>
 *
 *      Can be freely distributed and used under the terms of the GNU GPL.
 */

#ifndef _NAMES_H_
#define _NAMES_H_

#define PCI_LOOKUP_VENDOR 1
#define PCI_LOOKUP_DEVICE 2
#define PCI_LOOKUP_CLASS 4
#define PCI_LOOKUP_SUBSYSTEM 8
#define PCI_LOOKUP_PROGIF 16
#define PCI_LOOKUP_NUMERIC 0x10000

#define PCI_VENDOR_ID	0x00
#define PCI_DEVICE_ID	0x02

struct pci_access {
        unsigned int numeric_ids;
        char *pci_id_file_name;
        char *nl_list;
        struct nl_entry **nl_hash;
};

extern char *pci_lookup_name(struct pci_access *a, char *buf,
		int size, int flags, unsigned int arg1, unsigned int arg2,
		unsigned int arg3, unsigned int arg4);
extern void pci_free_name_list(struct pci_access *a);

#endif /* _NAMES_H_ */
