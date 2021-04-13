
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 707 > 0
static unsigned char *bytecode_data[707];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode_PIL(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$BmpImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GifImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpGradientFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$GimpPaletteFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$Image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageChops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageColor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageFilter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageMode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImagePalette(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageQt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageSequence(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$ImageShow(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$JpegPresets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$MpoImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PaletteFile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PngImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PpmImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$PyAccess(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffImagePlugin(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$TiffTags(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_binary(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PIL$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_PyQt5$QtCore$$45$postLoad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode__sounddevice(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bcrypt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_bcrypt$__about__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_certifi$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$cffi_opcode(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$commontypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$cparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$ffiplatform(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$lock(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$model(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$pkgconfig(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$recompiler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$vengine_cpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$vengine_gen(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cffi$verifier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$big5freq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$big5prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$chardistribution(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$charsetgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$charsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$codingstatemachine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$cp949prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$enums(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$escprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$escsm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$eucjpprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euckrfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euckrprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euctwfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$euctwprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$gb2312freq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$gb2312prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$hebrewprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$jisfreq(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$jpcntx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langbulgarianmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langcyrillicmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langgreekmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langhebrewmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langthaimodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$langturkishmodel(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$latin1prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcharsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcsgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$mbcssm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sbcharsetprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sbcsgroupprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$sjisprober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$universaldetector(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$utf8prober(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_chardet$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$ansi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$ansitowin32(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$initialise(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$win32(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_colorama$winterm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$__about__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$_der(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$_oid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$_types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$interfaces(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$aead(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$backend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ciphers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$cmac(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$decode_asn1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$dh(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$dsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ed25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ed448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$encode_asn1(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$hashes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$hmac(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$ocsp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$poly1305(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$rsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$x25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$x448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$backends$openssl$x509(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings$openssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings$openssl$_conditional(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$bindings$openssl$binding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$_asymmetric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$_cipheralgorithm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$_serialization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$dh(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$dsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$ec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$ed25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$ed448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$padding(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$rsa(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$x25519(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$asymmetric$x448(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$aead(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$algorithms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$ciphers$modes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$constant_time(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$hashes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$kdf(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$kdf$scrypt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$serialization(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$serialization$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$serialization$pkcs7(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$hazmat$primitives$serialization$ssh(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$certificate_transparency(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$extensions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$general_name(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$name(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$ocsp(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cryptography$x509$oid(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_cycler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$easter(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser$_parser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$parser$isoparser(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$relativedelta(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$rrule(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$_factories(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$tz(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$tz$win(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_dateutil$zoneinfo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$_constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$_error(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$_propertyhelper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$_signalhelper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$docstring(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$importer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$module(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$overrides(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$repository(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gi$types(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_google(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gtts(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gtts$lang(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gtts$langs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gtts$tokenizer(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gtts$tokenizer$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gtts$tokenizer$pre_processors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gtts$tokenizer$symbols(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gtts$tokenizer$tokenizer_cases(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gtts$tts(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gtts$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_gtts$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$idnadata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$intranges(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$package_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_idna$uts46data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_animation_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_cm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_cm_listed(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_color_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_constrained_layout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_layoutbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_mathtext_data(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_pylab_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_text_layout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$afm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$animation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$artist(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_secondary_axes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axes$_subplots(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$axis(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backend_bases(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backend_managers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backend_tools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$_backend_tk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_agg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_tkagg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_webagg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$backends$backend_webagg_core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$bezier(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$blocking_input(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$category(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$cbook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$cbook$deprecation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$cm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$collections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$colorbar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$colors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$container(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$contour(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$dates(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$docstring(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$dviread(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$figure(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$font_manager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$fontconfig_pattern(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$gridspec(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$hatch(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$image(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$legend(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$legend_handler(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$lines(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$markers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$mathtext(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$mlab(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$offsetbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$patches(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$path(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$patheffects(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$projections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$projections$geo(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$projections$polar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$pyplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$quiver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$rcsetup(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$scale(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$spines(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$stackplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$streamplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$style(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$style$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$table(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$texmanager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$text(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$textpath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$ticker(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tight_bbox(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tight_layout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$transforms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$triangulation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$tricontour(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$trifinder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$triinterpolate(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$tripcolor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$triplot(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$trirefine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$tri$tritools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$units(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_matplotlib$widgets(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$art3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$axes3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$axis3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_mpl_toolkits$mplot3d$proj3d(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$__config__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_distributor_init(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_globals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_pytesttester(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$_inspect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$py3k(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs_scalars(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_asarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype_ctypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_internal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_methods(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_string_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_type_aliases(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_ufunc_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$arrayprint(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$defchararray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$einsumfunc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$fromnumeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$function_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$getlimits(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$machar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$memmap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$multiarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numerictypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$overrides(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$records(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$shape_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$umath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ctypeslib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$_pocketfft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_datasource(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_iotools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraypad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraysetops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arrayterator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$format(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$function_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$histograms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$index_tricks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$mixins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$nanfunctions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$npyio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$scimath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$shape_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$stride_tricks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$twodim_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$type_check(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$ufunclike(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$extras(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$mrecords(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib$defmatrix(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$_polybase(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$chebyshev(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite_e(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$laguerre(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$legendre(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polyutils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random$_pickle(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_playsound(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psutil(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psutil$_common(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psutil$_compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psutil$_psaix(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psutil$_psbsd(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psutil$_pslinux(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psutil$_psosx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psutil$_psposix(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psutil$_pssunos(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_psutil$_pswindows(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyparsing(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyttsx3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyttsx3$driver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pyttsx3$engine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$__version__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$_internal_utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$adapters(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$api(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$auth(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$certs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$cookies(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$hooks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$models(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$packages(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$sessions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$status_codes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$structures(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_requests$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$__config__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_distributor_init(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_ccallback(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_pep440(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$_testutils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$_lib$deprecation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_scipy$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$decoder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$encoder(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$errors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$ordered_dict(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$raw_json(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_simplejson$scanner(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_six(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_sounddevice(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$_dist_ver(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$_monitor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$_tqdm_pandas(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$cli(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$gui(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$notebook(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$std(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_tqdm$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$_collections(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$connectionpool(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$_appengine_environ(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$appengine(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$pyopenssl(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$contrib$socks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$fields(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$filepost(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$backports(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$backports$makefile(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$ssl_match_hostname(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$packages$ssl_match_hostname$_implementation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$poolmanager(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$connection(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$queue(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$request(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$response(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$retry(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$ssl_(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$timeout(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$url(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_urllib3$util$wait(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_vosk(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_vosk$vosk_cffi(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"PIL", modulecode_PIL, 0, 0, NUITKA_PACKAGE_FLAG},
    {"PIL.BmpImagePlugin", modulecode_PIL$BmpImagePlugin, 0, 0, },
    {"PIL.GifImagePlugin", modulecode_PIL$GifImagePlugin, 0, 0, },
    {"PIL.GimpGradientFile", modulecode_PIL$GimpGradientFile, 0, 0, },
    {"PIL.GimpPaletteFile", modulecode_PIL$GimpPaletteFile, 0, 0, },
    {"PIL.Image", modulecode_PIL$Image, 0, 0, },
    {"PIL.ImageChops", modulecode_PIL$ImageChops, 0, 0, },
    {"PIL.ImageColor", modulecode_PIL$ImageColor, 0, 0, },
    {"PIL.ImageFile", modulecode_PIL$ImageFile, 0, 0, },
    {"PIL.ImageFilter", modulecode_PIL$ImageFilter, 0, 0, },
    {"PIL.ImageMode", modulecode_PIL$ImageMode, 0, 0, },
    {"PIL.ImagePalette", modulecode_PIL$ImagePalette, 0, 0, },
    {"PIL.ImageQt", modulecode_PIL$ImageQt, 0, 0, },
    {"PIL.ImageSequence", modulecode_PIL$ImageSequence, 0, 0, },
    {"PIL.ImageShow", modulecode_PIL$ImageShow, 0, 0, },
    {"PIL.JpegImagePlugin", modulecode_PIL$JpegImagePlugin, 0, 0, },
    {"PIL.JpegPresets", modulecode_PIL$JpegPresets, 0, 0, },
    {"PIL.MpoImagePlugin", modulecode_PIL$MpoImagePlugin, 0, 0, },
    {"PIL.PaletteFile", modulecode_PIL$PaletteFile, 0, 0, },
    {"PIL.PngImagePlugin", modulecode_PIL$PngImagePlugin, 0, 0, },
    {"PIL.PpmImagePlugin", modulecode_PIL$PpmImagePlugin, 0, 0, },
    {"PIL.PyAccess", modulecode_PIL$PyAccess, 0, 0, },
    {"PIL.TiffImagePlugin", modulecode_PIL$TiffImagePlugin, 0, 0, },
    {"PIL.TiffTags", modulecode_PIL$TiffTags, 0, 0, },
    {"PIL._binary", modulecode_PIL$_binary, 0, 0, },
    {"PIL._imaging", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"PIL._util", modulecode_PIL$_util, 0, 0, },
    {"PIL._version", modulecode_PIL$_version, 0, 0, },
    {"PyQt5", modulecode_PyQt5, 0, 0, NUITKA_PACKAGE_FLAG},
    {"PyQt5.QtCore", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"PyQt5.QtCore-postLoad", modulecode_PyQt5$QtCore$$45$postLoad, 0, 0, },
    {"PyQt5.QtGui", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"PyQt5.QtWidgets", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"__main__", modulecode___main__, 0, 0, },
    {"_asyncio", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_bz2", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_cffi_backend", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_cn", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_hk", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_iso2022", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_jp", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_kr", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_codecs_tw", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_contextvars", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_crypt", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_ctypes", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_curses", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_curses_panel", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_dbm", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_decimal", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_gdbm", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_hashlib", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_json", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_lsprof", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_lzma", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_multibytecodec", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_multiprocessing", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_opcode", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_posixshmem", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_queue", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_sounddevice", modulecode__sounddevice, 0, 0, },
    {"_sqlite3", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_ssl", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"_uuid", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"abc", NULL, 0, 5299, NUITKA_BYTECODE_FLAG},
    {"argparse", NULL, 1, 62556, NUITKA_BYTECODE_FLAG},
    {"ast", NULL, 2, 16646, NUITKA_BYTECODE_FLAG},
    {"audioop", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"base64", NULL, 3, 17036, NUITKA_BYTECODE_FLAG},
    {"bcrypt", modulecode_bcrypt, 0, 0, NUITKA_PACKAGE_FLAG},
    {"bcrypt.__about__", modulecode_bcrypt$__about__, 0, 0, },
    {"bcrypt._bcrypt", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"bisect", NULL, 4, 2319, NUITKA_BYTECODE_FLAG},
    {"bz2", NULL, 5, 11410, NUITKA_BYTECODE_FLAG},
    {"calendar", NULL, 6, 27029, NUITKA_BYTECODE_FLAG},
    {"certifi", modulecode_certifi, 0, 0, NUITKA_PACKAGE_FLAG},
    {"certifi.core", modulecode_certifi$core, 0, 0, },
    {"cffi", modulecode_cffi, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cffi.api", modulecode_cffi$api, 0, 0, },
    {"cffi.cffi_opcode", modulecode_cffi$cffi_opcode, 0, 0, },
    {"cffi.commontypes", modulecode_cffi$commontypes, 0, 0, },
    {"cffi.cparser", modulecode_cffi$cparser, 0, 0, },
    {"cffi.error", modulecode_cffi$error, 0, 0, },
    {"cffi.ffiplatform", modulecode_cffi$ffiplatform, 0, 0, },
    {"cffi.lock", modulecode_cffi$lock, 0, 0, },
    {"cffi.model", modulecode_cffi$model, 0, 0, },
    {"cffi.pkgconfig", modulecode_cffi$pkgconfig, 0, 0, },
    {"cffi.recompiler", modulecode_cffi$recompiler, 0, 0, },
    {"cffi.vengine_cpy", modulecode_cffi$vengine_cpy, 0, 0, },
    {"cffi.vengine_gen", modulecode_cffi$vengine_gen, 0, 0, },
    {"cffi.verifier", modulecode_cffi$verifier, 0, 0, },
    {"cgi", NULL, 7, 26272, NUITKA_BYTECODE_FLAG},
    {"chardet", modulecode_chardet, 0, 0, NUITKA_PACKAGE_FLAG},
    {"chardet.big5freq", modulecode_chardet$big5freq, 0, 0, },
    {"chardet.big5prober", modulecode_chardet$big5prober, 0, 0, },
    {"chardet.chardistribution", modulecode_chardet$chardistribution, 0, 0, },
    {"chardet.charsetgroupprober", modulecode_chardet$charsetgroupprober, 0, 0, },
    {"chardet.charsetprober", modulecode_chardet$charsetprober, 0, 0, },
    {"chardet.codingstatemachine", modulecode_chardet$codingstatemachine, 0, 0, },
    {"chardet.compat", modulecode_chardet$compat, 0, 0, },
    {"chardet.cp949prober", modulecode_chardet$cp949prober, 0, 0, },
    {"chardet.enums", modulecode_chardet$enums, 0, 0, },
    {"chardet.escprober", modulecode_chardet$escprober, 0, 0, },
    {"chardet.escsm", modulecode_chardet$escsm, 0, 0, },
    {"chardet.eucjpprober", modulecode_chardet$eucjpprober, 0, 0, },
    {"chardet.euckrfreq", modulecode_chardet$euckrfreq, 0, 0, },
    {"chardet.euckrprober", modulecode_chardet$euckrprober, 0, 0, },
    {"chardet.euctwfreq", modulecode_chardet$euctwfreq, 0, 0, },
    {"chardet.euctwprober", modulecode_chardet$euctwprober, 0, 0, },
    {"chardet.gb2312freq", modulecode_chardet$gb2312freq, 0, 0, },
    {"chardet.gb2312prober", modulecode_chardet$gb2312prober, 0, 0, },
    {"chardet.hebrewprober", modulecode_chardet$hebrewprober, 0, 0, },
    {"chardet.jisfreq", modulecode_chardet$jisfreq, 0, 0, },
    {"chardet.jpcntx", modulecode_chardet$jpcntx, 0, 0, },
    {"chardet.langbulgarianmodel", modulecode_chardet$langbulgarianmodel, 0, 0, },
    {"chardet.langcyrillicmodel", modulecode_chardet$langcyrillicmodel, 0, 0, },
    {"chardet.langgreekmodel", modulecode_chardet$langgreekmodel, 0, 0, },
    {"chardet.langhebrewmodel", modulecode_chardet$langhebrewmodel, 0, 0, },
    {"chardet.langthaimodel", modulecode_chardet$langthaimodel, 0, 0, },
    {"chardet.langturkishmodel", modulecode_chardet$langturkishmodel, 0, 0, },
    {"chardet.latin1prober", modulecode_chardet$latin1prober, 0, 0, },
    {"chardet.mbcharsetprober", modulecode_chardet$mbcharsetprober, 0, 0, },
    {"chardet.mbcsgroupprober", modulecode_chardet$mbcsgroupprober, 0, 0, },
    {"chardet.mbcssm", modulecode_chardet$mbcssm, 0, 0, },
    {"chardet.sbcharsetprober", modulecode_chardet$sbcharsetprober, 0, 0, },
    {"chardet.sbcsgroupprober", modulecode_chardet$sbcsgroupprober, 0, 0, },
    {"chardet.sjisprober", modulecode_chardet$sjisprober, 0, 0, },
    {"chardet.universaldetector", modulecode_chardet$universaldetector, 0, 0, },
    {"chardet.utf8prober", modulecode_chardet$utf8prober, 0, 0, },
    {"chardet.version", modulecode_chardet$version, 0, 0, },
    {"codecs", NULL, 8, 33921, NUITKA_BYTECODE_FLAG},
    {"collections", NULL, 9, 46391, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"colorama", modulecode_colorama, 0, 0, NUITKA_PACKAGE_FLAG},
    {"colorama.ansi", modulecode_colorama$ansi, 0, 0, },
    {"colorama.ansitowin32", modulecode_colorama$ansitowin32, 0, 0, },
    {"colorama.initialise", modulecode_colorama$initialise, 0, 0, },
    {"colorama.win32", modulecode_colorama$win32, 0, 0, },
    {"colorama.winterm", modulecode_colorama$winterm, 0, 0, },
    {"colorsys", NULL, 10, 3205, NUITKA_BYTECODE_FLAG},
    {"configparser", NULL, 11, 45683, NUITKA_BYTECODE_FLAG},
    {"contextlib", NULL, 12, 20194, NUITKA_BYTECODE_FLAG},
    {"copy", NULL, 13, 6952, NUITKA_BYTECODE_FLAG},
    {"copyreg", NULL, 14, 4283, NUITKA_BYTECODE_FLAG},
    {"cryptography", modulecode_cryptography, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.__about__", modulecode_cryptography$__about__, 0, 0, },
    {"cryptography.exceptions", modulecode_cryptography$exceptions, 0, 0, },
    {"cryptography.hazmat", modulecode_cryptography$hazmat, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat._der", modulecode_cryptography$hazmat$_der, 0, 0, },
    {"cryptography.hazmat._oid", modulecode_cryptography$hazmat$_oid, 0, 0, },
    {"cryptography.hazmat._types", modulecode_cryptography$hazmat$_types, 0, 0, },
    {"cryptography.hazmat.backends", modulecode_cryptography$hazmat$backends, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.backends.interfaces", modulecode_cryptography$hazmat$backends$interfaces, 0, 0, },
    {"cryptography.hazmat.backends.openssl", modulecode_cryptography$hazmat$backends$openssl, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.backends.openssl.aead", modulecode_cryptography$hazmat$backends$openssl$aead, 0, 0, },
    {"cryptography.hazmat.backends.openssl.backend", modulecode_cryptography$hazmat$backends$openssl$backend, 0, 0, },
    {"cryptography.hazmat.backends.openssl.ciphers", modulecode_cryptography$hazmat$backends$openssl$ciphers, 0, 0, },
    {"cryptography.hazmat.backends.openssl.cmac", modulecode_cryptography$hazmat$backends$openssl$cmac, 0, 0, },
    {"cryptography.hazmat.backends.openssl.decode_asn1", modulecode_cryptography$hazmat$backends$openssl$decode_asn1, 0, 0, },
    {"cryptography.hazmat.backends.openssl.dh", modulecode_cryptography$hazmat$backends$openssl$dh, 0, 0, },
    {"cryptography.hazmat.backends.openssl.dsa", modulecode_cryptography$hazmat$backends$openssl$dsa, 0, 0, },
    {"cryptography.hazmat.backends.openssl.ec", modulecode_cryptography$hazmat$backends$openssl$ec, 0, 0, },
    {"cryptography.hazmat.backends.openssl.ed25519", modulecode_cryptography$hazmat$backends$openssl$ed25519, 0, 0, },
    {"cryptography.hazmat.backends.openssl.ed448", modulecode_cryptography$hazmat$backends$openssl$ed448, 0, 0, },
    {"cryptography.hazmat.backends.openssl.encode_asn1", modulecode_cryptography$hazmat$backends$openssl$encode_asn1, 0, 0, },
    {"cryptography.hazmat.backends.openssl.hashes", modulecode_cryptography$hazmat$backends$openssl$hashes, 0, 0, },
    {"cryptography.hazmat.backends.openssl.hmac", modulecode_cryptography$hazmat$backends$openssl$hmac, 0, 0, },
    {"cryptography.hazmat.backends.openssl.ocsp", modulecode_cryptography$hazmat$backends$openssl$ocsp, 0, 0, },
    {"cryptography.hazmat.backends.openssl.poly1305", modulecode_cryptography$hazmat$backends$openssl$poly1305, 0, 0, },
    {"cryptography.hazmat.backends.openssl.rsa", modulecode_cryptography$hazmat$backends$openssl$rsa, 0, 0, },
    {"cryptography.hazmat.backends.openssl.utils", modulecode_cryptography$hazmat$backends$openssl$utils, 0, 0, },
    {"cryptography.hazmat.backends.openssl.x25519", modulecode_cryptography$hazmat$backends$openssl$x25519, 0, 0, },
    {"cryptography.hazmat.backends.openssl.x448", modulecode_cryptography$hazmat$backends$openssl$x448, 0, 0, },
    {"cryptography.hazmat.backends.openssl.x509", modulecode_cryptography$hazmat$backends$openssl$x509, 0, 0, },
    {"cryptography.hazmat.bindings", modulecode_cryptography$hazmat$bindings, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.bindings._openssl", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"cryptography.hazmat.bindings.openssl", modulecode_cryptography$hazmat$bindings$openssl, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.bindings.openssl._conditional", modulecode_cryptography$hazmat$bindings$openssl$_conditional, 0, 0, },
    {"cryptography.hazmat.bindings.openssl.binding", modulecode_cryptography$hazmat$bindings$openssl$binding, 0, 0, },
    {"cryptography.hazmat.primitives", modulecode_cryptography$hazmat$primitives, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives._asymmetric", modulecode_cryptography$hazmat$primitives$_asymmetric, 0, 0, },
    {"cryptography.hazmat.primitives._cipheralgorithm", modulecode_cryptography$hazmat$primitives$_cipheralgorithm, 0, 0, },
    {"cryptography.hazmat.primitives._serialization", modulecode_cryptography$hazmat$primitives$_serialization, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric", modulecode_cryptography$hazmat$primitives$asymmetric, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.asymmetric.dh", modulecode_cryptography$hazmat$primitives$asymmetric$dh, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.dsa", modulecode_cryptography$hazmat$primitives$asymmetric$dsa, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.ec", modulecode_cryptography$hazmat$primitives$asymmetric$ec, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.ed25519", modulecode_cryptography$hazmat$primitives$asymmetric$ed25519, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.ed448", modulecode_cryptography$hazmat$primitives$asymmetric$ed448, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.padding", modulecode_cryptography$hazmat$primitives$asymmetric$padding, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.rsa", modulecode_cryptography$hazmat$primitives$asymmetric$rsa, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.utils", modulecode_cryptography$hazmat$primitives$asymmetric$utils, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.x25519", modulecode_cryptography$hazmat$primitives$asymmetric$x25519, 0, 0, },
    {"cryptography.hazmat.primitives.asymmetric.x448", modulecode_cryptography$hazmat$primitives$asymmetric$x448, 0, 0, },
    {"cryptography.hazmat.primitives.ciphers", modulecode_cryptography$hazmat$primitives$ciphers, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.ciphers.aead", modulecode_cryptography$hazmat$primitives$ciphers$aead, 0, 0, },
    {"cryptography.hazmat.primitives.ciphers.algorithms", modulecode_cryptography$hazmat$primitives$ciphers$algorithms, 0, 0, },
    {"cryptography.hazmat.primitives.ciphers.base", modulecode_cryptography$hazmat$primitives$ciphers$base, 0, 0, },
    {"cryptography.hazmat.primitives.ciphers.modes", modulecode_cryptography$hazmat$primitives$ciphers$modes, 0, 0, },
    {"cryptography.hazmat.primitives.constant_time", modulecode_cryptography$hazmat$primitives$constant_time, 0, 0, },
    {"cryptography.hazmat.primitives.hashes", modulecode_cryptography$hazmat$primitives$hashes, 0, 0, },
    {"cryptography.hazmat.primitives.kdf", modulecode_cryptography$hazmat$primitives$kdf, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.kdf.scrypt", modulecode_cryptography$hazmat$primitives$kdf$scrypt, 0, 0, },
    {"cryptography.hazmat.primitives.serialization", modulecode_cryptography$hazmat$primitives$serialization, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.hazmat.primitives.serialization.base", modulecode_cryptography$hazmat$primitives$serialization$base, 0, 0, },
    {"cryptography.hazmat.primitives.serialization.pkcs7", modulecode_cryptography$hazmat$primitives$serialization$pkcs7, 0, 0, },
    {"cryptography.hazmat.primitives.serialization.ssh", modulecode_cryptography$hazmat$primitives$serialization$ssh, 0, 0, },
    {"cryptography.utils", modulecode_cryptography$utils, 0, 0, },
    {"cryptography.x509", modulecode_cryptography$x509, 0, 0, NUITKA_PACKAGE_FLAG},
    {"cryptography.x509.base", modulecode_cryptography$x509$base, 0, 0, },
    {"cryptography.x509.certificate_transparency", modulecode_cryptography$x509$certificate_transparency, 0, 0, },
    {"cryptography.x509.extensions", modulecode_cryptography$x509$extensions, 0, 0, },
    {"cryptography.x509.general_name", modulecode_cryptography$x509$general_name, 0, 0, },
    {"cryptography.x509.name", modulecode_cryptography$x509$name, 0, 0, },
    {"cryptography.x509.ocsp", modulecode_cryptography$x509$ocsp, 0, 0, },
    {"cryptography.x509.oid", modulecode_cryptography$x509$oid, 0, 0, },
    {"ctypes", NULL, 15, 16328, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"ctypes.util", NULL, 16, 7796, NUITKA_BYTECODE_FLAG},
    {"curses", NULL, 17, 2096, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"cycler", modulecode_cycler, 0, 0, },
    {"datetime", NULL, 18, 56943, NUITKA_BYTECODE_FLAG},
    {"dateutil", modulecode_dateutil, 0, 0, NUITKA_PACKAGE_FLAG},
    {"dateutil._common", modulecode_dateutil$_common, 0, 0, },
    {"dateutil._version", modulecode_dateutil$_version, 0, 0, },
    {"dateutil.easter", modulecode_dateutil$easter, 0, 0, },
    {"dateutil.parser", modulecode_dateutil$parser, 0, 0, NUITKA_PACKAGE_FLAG},
    {"dateutil.parser._parser", modulecode_dateutil$parser$_parser, 0, 0, },
    {"dateutil.parser.isoparser", modulecode_dateutil$parser$isoparser, 0, 0, },
    {"dateutil.relativedelta", modulecode_dateutil$relativedelta, 0, 0, },
    {"dateutil.rrule", modulecode_dateutil$rrule, 0, 0, },
    {"dateutil.tz", modulecode_dateutil$tz, 0, 0, NUITKA_PACKAGE_FLAG},
    {"dateutil.tz._common", modulecode_dateutil$tz$_common, 0, 0, },
    {"dateutil.tz._factories", modulecode_dateutil$tz$_factories, 0, 0, },
    {"dateutil.tz.tz", modulecode_dateutil$tz$tz, 0, 0, },
    {"dateutil.tz.win", modulecode_dateutil$tz$win, 0, 0, },
    {"dateutil.zoneinfo", modulecode_dateutil$zoneinfo, 0, 0, NUITKA_PACKAGE_FLAG},
    {"difflib", NULL, 19, 59403, NUITKA_BYTECODE_FLAG},
    {"dis", NULL, 20, 15767, NUITKA_BYTECODE_FLAG},
    {"distutils", NULL, 21, 340, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils.ccompiler", NULL, 22, 33262, NUITKA_BYTECODE_FLAG},
    {"distutils.cmd", NULL, 23, 13913, NUITKA_BYTECODE_FLAG},
    {"distutils.command", NULL, 24, 499, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils.command.bdist", NULL, 25, 3631, NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_rpm", NULL, 26, 12393, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build", NULL, 27, 3846, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_clib", NULL, 28, 4779, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_ext", NULL, 29, 16113, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_py", NULL, 30, 10445, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_scripts", NULL, 31, 4289, NUITKA_BYTECODE_FLAG},
    {"distutils.command.config", NULL, 32, 10192, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install", NULL, 33, 14597, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_data", NULL, 34, 2254, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_headers", NULL, 35, 1673, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_scripts", NULL, 36, 2106, NUITKA_BYTECODE_FLAG},
    {"distutils.command.sdist", NULL, 37, 14481, NUITKA_BYTECODE_FLAG},
    {"distutils.core", NULL, 38, 6579, NUITKA_BYTECODE_FLAG},
    {"distutils.cygwinccompiler", NULL, 39, 8577, NUITKA_BYTECODE_FLAG},
    {"distutils.debug", NULL, 40, 159, NUITKA_BYTECODE_FLAG},
    {"distutils.dep_util", NULL, 41, 2679, NUITKA_BYTECODE_FLAG},
    {"distutils.dir_util", NULL, 42, 6144, NUITKA_BYTECODE_FLAG},
    {"distutils.dist", NULL, 43, 34457, NUITKA_BYTECODE_FLAG},
    {"distutils.errors", NULL, 44, 5215, NUITKA_BYTECODE_FLAG},
    {"distutils.extension", NULL, 45, 6888, NUITKA_BYTECODE_FLAG},
    {"distutils.fancy_getopt", NULL, 46, 10621, NUITKA_BYTECODE_FLAG},
    {"distutils.file_util", NULL, 47, 5898, NUITKA_BYTECODE_FLAG},
    {"distutils.filelist", NULL, 48, 9832, NUITKA_BYTECODE_FLAG},
    {"distutils.log", NULL, 49, 2280, NUITKA_BYTECODE_FLAG},
    {"distutils.msvccompiler", NULL, 50, 14688, NUITKA_BYTECODE_FLAG},
    {"distutils.spawn", NULL, 51, 5071, NUITKA_BYTECODE_FLAG},
    {"distutils.sysconfig", NULL, 52, 12772, NUITKA_BYTECODE_FLAG},
    {"distutils.unixccompiler", NULL, 53, 7049, NUITKA_BYTECODE_FLAG},
    {"distutils.util", NULL, 54, 15511, NUITKA_BYTECODE_FLAG},
    {"distutils.version", NULL, 55, 7276, NUITKA_BYTECODE_FLAG},
    {"doctest", NULL, 56, 75939, NUITKA_BYTECODE_FLAG},
    {"dummy_threading", NULL, 57, 1075, NUITKA_BYTECODE_FLAG},
    {"email", NULL, 58, 1647, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email.parser", NULL, 59, 5687, NUITKA_BYTECODE_FLAG},
    {"email.utils", NULL, 60, 9507, NUITKA_BYTECODE_FLAG},
    {"encodings", NULL, 61, 3859, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"encodings.idna", NULL, 62, 5582, NUITKA_BYTECODE_FLAG},
    {"enum", NULL, 63, 24471, NUITKA_BYTECODE_FLAG},
    {"fileinput", NULL, 64, 13338, NUITKA_BYTECODE_FLAG},
    {"fnmatch", NULL, 65, 3297, NUITKA_BYTECODE_FLAG},
    {"fractions", NULL, 66, 18704, NUITKA_BYTECODE_FLAG},
    {"functools", NULL, 67, 27866, NUITKA_BYTECODE_FLAG},
    {"gi", modulecode_gi, 0, 0, NUITKA_PACKAGE_FLAG},
    {"gi._compat", modulecode_gi$_compat, 0, 0, },
    {"gi._constants", modulecode_gi$_constants, 0, 0, },
    {"gi._error", modulecode_gi$_error, 0, 0, },
    {"gi._gi", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"gi._propertyhelper", modulecode_gi$_propertyhelper, 0, 0, },
    {"gi._signalhelper", modulecode_gi$_signalhelper, 0, 0, },
    {"gi.docstring", modulecode_gi$docstring, 0, 0, },
    {"gi.importer", modulecode_gi$importer, 0, 0, },
    {"gi.module", modulecode_gi$module, 0, 0, },
    {"gi.overrides", modulecode_gi$overrides, 0, 0, NUITKA_PACKAGE_FLAG},
    {"gi.repository", modulecode_gi$repository, 0, 0, NUITKA_PACKAGE_FLAG},
    {"gi.types", modulecode_gi$types, 0, 0, },
    {"glob", NULL, 68, 4308, NUITKA_BYTECODE_FLAG},
    {"google", modulecode_google, 0, 0, NUITKA_PACKAGE_FLAG},
    {"gtts", modulecode_gtts, 0, 0, NUITKA_PACKAGE_FLAG},
    {"gtts.lang", modulecode_gtts$lang, 0, 0, },
    {"gtts.langs", modulecode_gtts$langs, 0, 0, },
    {"gtts.tokenizer", modulecode_gtts$tokenizer, 0, 0, NUITKA_PACKAGE_FLAG},
    {"gtts.tokenizer.core", modulecode_gtts$tokenizer$core, 0, 0, },
    {"gtts.tokenizer.pre_processors", modulecode_gtts$tokenizer$pre_processors, 0, 0, },
    {"gtts.tokenizer.symbols", modulecode_gtts$tokenizer$symbols, 0, 0, },
    {"gtts.tokenizer.tokenizer_cases", modulecode_gtts$tokenizer$tokenizer_cases, 0, 0, },
    {"gtts.tts", modulecode_gtts$tts, 0, 0, },
    {"gtts.utils", modulecode_gtts$utils, 0, 0, },
    {"gtts.version", modulecode_gtts$version, 0, 0, },
    {"gzip", NULL, 69, 18156, NUITKA_BYTECODE_FLAG},
    {"hashlib", NULL, 70, 6692, NUITKA_BYTECODE_FLAG},
    {"heapq", NULL, 71, 14035, NUITKA_BYTECODE_FLAG},
    {"hmac", NULL, 72, 6353, NUITKA_BYTECODE_FLAG},
    {"html", NULL, 73, 3574, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"http", NULL, 74, 6020, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"http.cookies", NULL, 75, 15233, NUITKA_BYTECODE_FLAG},
    {"idna", modulecode_idna, 0, 0, NUITKA_PACKAGE_FLAG},
    {"idna.core", modulecode_idna$core, 0, 0, },
    {"idna.idnadata", modulecode_idna$idnadata, 0, 0, },
    {"idna.intranges", modulecode_idna$intranges, 0, 0, },
    {"idna.package_data", modulecode_idna$package_data, 0, 0, },
    {"idna.uts46data", modulecode_idna$uts46data, 0, 0, },
    {"imp", NULL, 76, 9774, NUITKA_BYTECODE_FLAG},
    {"importlib", NULL, 77, 3714, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"importlib.machinery", NULL, 78, 927, NUITKA_BYTECODE_FLAG},
    {"importlib.util", NULL, 79, 9257, NUITKA_BYTECODE_FLAG},
    {"inspect", NULL, 80, 80348, NUITKA_BYTECODE_FLAG},
    {"io", NULL, 81, 3419, NUITKA_BYTECODE_FLAG},
    {"ipaddress", NULL, 82, 59533, NUITKA_BYTECODE_FLAG},
    {"json", NULL, 83, 12564, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"kiwisolver", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"linecache", NULL, 84, 3832, NUITKA_BYTECODE_FLAG},
    {"locale", NULL, 85, 34639, NUITKA_BYTECODE_FLAG},
    {"logging", NULL, 86, 64827, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lzma", NULL, 87, 11983, NUITKA_BYTECODE_FLAG},
    {"matplotlib", modulecode_matplotlib, 0, 0, NUITKA_PACKAGE_FLAG},
    {"matplotlib._animation_data", modulecode_matplotlib$_animation_data, 0, 0, },
    {"matplotlib._cm", modulecode_matplotlib$_cm, 0, 0, },
    {"matplotlib._cm_listed", modulecode_matplotlib$_cm_listed, 0, 0, },
    {"matplotlib._color_data", modulecode_matplotlib$_color_data, 0, 0, },
    {"matplotlib._constrained_layout", modulecode_matplotlib$_constrained_layout, 0, 0, },
    {"matplotlib._contour", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"matplotlib._image", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"matplotlib._layoutbox", modulecode_matplotlib$_layoutbox, 0, 0, },
    {"matplotlib._mathtext_data", modulecode_matplotlib$_mathtext_data, 0, 0, },
    {"matplotlib._path", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"matplotlib._pylab_helpers", modulecode_matplotlib$_pylab_helpers, 0, 0, },
    {"matplotlib._qhull", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"matplotlib._text_layout", modulecode_matplotlib$_text_layout, 0, 0, },
    {"matplotlib._tri", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"matplotlib._version", modulecode_matplotlib$_version, 0, 0, },
    {"matplotlib.afm", modulecode_matplotlib$afm, 0, 0, },
    {"matplotlib.animation", modulecode_matplotlib$animation, 0, 0, },
    {"matplotlib.artist", modulecode_matplotlib$artist, 0, 0, },
    {"matplotlib.axes", modulecode_matplotlib$axes, 0, 0, NUITKA_PACKAGE_FLAG},
    {"matplotlib.axes._axes", modulecode_matplotlib$axes$_axes, 0, 0, },
    {"matplotlib.axes._base", modulecode_matplotlib$axes$_base, 0, 0, },
    {"matplotlib.axes._secondary_axes", modulecode_matplotlib$axes$_secondary_axes, 0, 0, },
    {"matplotlib.axes._subplots", modulecode_matplotlib$axes$_subplots, 0, 0, },
    {"matplotlib.axis", modulecode_matplotlib$axis, 0, 0, },
    {"matplotlib.backend_bases", modulecode_matplotlib$backend_bases, 0, 0, },
    {"matplotlib.backend_managers", modulecode_matplotlib$backend_managers, 0, 0, },
    {"matplotlib.backend_tools", modulecode_matplotlib$backend_tools, 0, 0, },
    {"matplotlib.backends", modulecode_matplotlib$backends, 0, 0, NUITKA_PACKAGE_FLAG},
    {"matplotlib.backends._backend_agg", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"matplotlib.backends._backend_tk", modulecode_matplotlib$backends$_backend_tk, 0, 0, },
    {"matplotlib.backends._tkagg", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"matplotlib.backends.backend_agg", modulecode_matplotlib$backends$backend_agg, 0, 0, },
    {"matplotlib.backends.backend_tkagg", modulecode_matplotlib$backends$backend_tkagg, 0, 0, },
    {"matplotlib.backends.backend_webagg", modulecode_matplotlib$backends$backend_webagg, 0, 0, },
    {"matplotlib.backends.backend_webagg_core", modulecode_matplotlib$backends$backend_webagg_core, 0, 0, },
    {"matplotlib.bezier", modulecode_matplotlib$bezier, 0, 0, },
    {"matplotlib.blocking_input", modulecode_matplotlib$blocking_input, 0, 0, },
    {"matplotlib.category", modulecode_matplotlib$category, 0, 0, },
    {"matplotlib.cbook", modulecode_matplotlib$cbook, 0, 0, NUITKA_PACKAGE_FLAG},
    {"matplotlib.cbook.deprecation", modulecode_matplotlib$cbook$deprecation, 0, 0, },
    {"matplotlib.cm", modulecode_matplotlib$cm, 0, 0, },
    {"matplotlib.collections", modulecode_matplotlib$collections, 0, 0, },
    {"matplotlib.colorbar", modulecode_matplotlib$colorbar, 0, 0, },
    {"matplotlib.colors", modulecode_matplotlib$colors, 0, 0, },
    {"matplotlib.container", modulecode_matplotlib$container, 0, 0, },
    {"matplotlib.contour", modulecode_matplotlib$contour, 0, 0, },
    {"matplotlib.dates", modulecode_matplotlib$dates, 0, 0, },
    {"matplotlib.docstring", modulecode_matplotlib$docstring, 0, 0, },
    {"matplotlib.dviread", modulecode_matplotlib$dviread, 0, 0, },
    {"matplotlib.figure", modulecode_matplotlib$figure, 0, 0, },
    {"matplotlib.font_manager", modulecode_matplotlib$font_manager, 0, 0, },
    {"matplotlib.fontconfig_pattern", modulecode_matplotlib$fontconfig_pattern, 0, 0, },
    {"matplotlib.ft2font", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"matplotlib.gridspec", modulecode_matplotlib$gridspec, 0, 0, },
    {"matplotlib.hatch", modulecode_matplotlib$hatch, 0, 0, },
    {"matplotlib.image", modulecode_matplotlib$image, 0, 0, },
    {"matplotlib.legend", modulecode_matplotlib$legend, 0, 0, },
    {"matplotlib.legend_handler", modulecode_matplotlib$legend_handler, 0, 0, },
    {"matplotlib.lines", modulecode_matplotlib$lines, 0, 0, },
    {"matplotlib.markers", modulecode_matplotlib$markers, 0, 0, },
    {"matplotlib.mathtext", modulecode_matplotlib$mathtext, 0, 0, },
    {"matplotlib.mlab", modulecode_matplotlib$mlab, 0, 0, },
    {"matplotlib.offsetbox", modulecode_matplotlib$offsetbox, 0, 0, },
    {"matplotlib.patches", modulecode_matplotlib$patches, 0, 0, },
    {"matplotlib.path", modulecode_matplotlib$path, 0, 0, },
    {"matplotlib.patheffects", modulecode_matplotlib$patheffects, 0, 0, },
    {"matplotlib.projections", modulecode_matplotlib$projections, 0, 0, NUITKA_PACKAGE_FLAG},
    {"matplotlib.projections.geo", modulecode_matplotlib$projections$geo, 0, 0, },
    {"matplotlib.projections.polar", modulecode_matplotlib$projections$polar, 0, 0, },
    {"matplotlib.pyplot", modulecode_matplotlib$pyplot, 0, 0, },
    {"matplotlib.quiver", modulecode_matplotlib$quiver, 0, 0, },
    {"matplotlib.rcsetup", modulecode_matplotlib$rcsetup, 0, 0, },
    {"matplotlib.scale", modulecode_matplotlib$scale, 0, 0, },
    {"matplotlib.spines", modulecode_matplotlib$spines, 0, 0, },
    {"matplotlib.stackplot", modulecode_matplotlib$stackplot, 0, 0, },
    {"matplotlib.streamplot", modulecode_matplotlib$streamplot, 0, 0, },
    {"matplotlib.style", modulecode_matplotlib$style, 0, 0, NUITKA_PACKAGE_FLAG},
    {"matplotlib.style.core", modulecode_matplotlib$style$core, 0, 0, },
    {"matplotlib.table", modulecode_matplotlib$table, 0, 0, },
    {"matplotlib.texmanager", modulecode_matplotlib$texmanager, 0, 0, },
    {"matplotlib.text", modulecode_matplotlib$text, 0, 0, },
    {"matplotlib.textpath", modulecode_matplotlib$textpath, 0, 0, },
    {"matplotlib.ticker", modulecode_matplotlib$ticker, 0, 0, },
    {"matplotlib.tight_bbox", modulecode_matplotlib$tight_bbox, 0, 0, },
    {"matplotlib.tight_layout", modulecode_matplotlib$tight_layout, 0, 0, },
    {"matplotlib.transforms", modulecode_matplotlib$transforms, 0, 0, },
    {"matplotlib.tri", modulecode_matplotlib$tri, 0, 0, NUITKA_PACKAGE_FLAG},
    {"matplotlib.tri.triangulation", modulecode_matplotlib$tri$triangulation, 0, 0, },
    {"matplotlib.tri.tricontour", modulecode_matplotlib$tri$tricontour, 0, 0, },
    {"matplotlib.tri.trifinder", modulecode_matplotlib$tri$trifinder, 0, 0, },
    {"matplotlib.tri.triinterpolate", modulecode_matplotlib$tri$triinterpolate, 0, 0, },
    {"matplotlib.tri.tripcolor", modulecode_matplotlib$tri$tripcolor, 0, 0, },
    {"matplotlib.tri.triplot", modulecode_matplotlib$tri$triplot, 0, 0, },
    {"matplotlib.tri.trirefine", modulecode_matplotlib$tri$trirefine, 0, 0, },
    {"matplotlib.tri.tritools", modulecode_matplotlib$tri$tritools, 0, 0, },
    {"matplotlib.units", modulecode_matplotlib$units, 0, 0, },
    {"matplotlib.widgets", modulecode_matplotlib$widgets, 0, 0, },
    {"mimetypes", NULL, 88, 15996, NUITKA_BYTECODE_FLAG},
    {"mmap", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"mpl_toolkits", modulecode_mpl_toolkits, 0, 0, NUITKA_PACKAGE_FLAG},
    {"mpl_toolkits.mplot3d", modulecode_mpl_toolkits$mplot3d, 0, 0, NUITKA_PACKAGE_FLAG},
    {"mpl_toolkits.mplot3d.art3d", modulecode_mpl_toolkits$mplot3d$art3d, 0, 0, },
    {"mpl_toolkits.mplot3d.axes3d", modulecode_mpl_toolkits$mplot3d$axes3d, 0, 0, },
    {"mpl_toolkits.mplot3d.axis3d", modulecode_mpl_toolkits$mplot3d$axis3d, 0, 0, },
    {"mpl_toolkits.mplot3d.proj3d", modulecode_mpl_toolkits$mplot3d$proj3d, 0, 0, },
    {"multiprocessing", NULL, 89, 618, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.pool", NULL, 90, 24990, NUITKA_BYTECODE_FLAG},
    {"netrc", NULL, 91, 3742, NUITKA_BYTECODE_FLAG},
    {"ntpath", NULL, 92, 14622, NUITKA_BYTECODE_FLAG},
    {"numbers", NULL, 93, 12167, NUITKA_BYTECODE_FLAG},
    {"numpy", modulecode_numpy, 0, 0, NUITKA_PACKAGE_FLAG},
    {"numpy.__config__", modulecode_numpy$__config__, 0, 0, },
    {"numpy._distributor_init", modulecode_numpy$_distributor_init, 0, 0, },
    {"numpy._globals", modulecode_numpy$_globals, 0, 0, },
    {"numpy._pytesttester", modulecode_numpy$_pytesttester, 0, 0, },
    {"numpy.compat", modulecode_numpy$compat, 0, 0, NUITKA_PACKAGE_FLAG},
    {"numpy.compat._inspect", modulecode_numpy$compat$_inspect, 0, 0, },
    {"numpy.compat.py3k", modulecode_numpy$compat$py3k, 0, 0, },
    {"numpy.core", modulecode_numpy$core, 0, 0, NUITKA_PACKAGE_FLAG},
    {"numpy.core._add_newdocs", modulecode_numpy$core$_add_newdocs, 0, 0, },
    {"numpy.core._add_newdocs_scalars", modulecode_numpy$core$_add_newdocs_scalars, 0, 0, },
    {"numpy.core._asarray", modulecode_numpy$core$_asarray, 0, 0, },
    {"numpy.core._dtype", modulecode_numpy$core$_dtype, 0, 0, },
    {"numpy.core._dtype_ctypes", modulecode_numpy$core$_dtype_ctypes, 0, 0, },
    {"numpy.core._exceptions", modulecode_numpy$core$_exceptions, 0, 0, },
    {"numpy.core._internal", modulecode_numpy$core$_internal, 0, 0, },
    {"numpy.core._methods", modulecode_numpy$core$_methods, 0, 0, },
    {"numpy.core._multiarray_tests", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"numpy.core._multiarray_umath", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"numpy.core._string_helpers", modulecode_numpy$core$_string_helpers, 0, 0, },
    {"numpy.core._type_aliases", modulecode_numpy$core$_type_aliases, 0, 0, },
    {"numpy.core._ufunc_config", modulecode_numpy$core$_ufunc_config, 0, 0, },
    {"numpy.core.arrayprint", modulecode_numpy$core$arrayprint, 0, 0, },
    {"numpy.core.defchararray", modulecode_numpy$core$defchararray, 0, 0, },
    {"numpy.core.einsumfunc", modulecode_numpy$core$einsumfunc, 0, 0, },
    {"numpy.core.fromnumeric", modulecode_numpy$core$fromnumeric, 0, 0, },
    {"numpy.core.function_base", modulecode_numpy$core$function_base, 0, 0, },
    {"numpy.core.getlimits", modulecode_numpy$core$getlimits, 0, 0, },
    {"numpy.core.machar", modulecode_numpy$core$machar, 0, 0, },
    {"numpy.core.memmap", modulecode_numpy$core$memmap, 0, 0, },
    {"numpy.core.multiarray", modulecode_numpy$core$multiarray, 0, 0, },
    {"numpy.core.numeric", modulecode_numpy$core$numeric, 0, 0, },
    {"numpy.core.numerictypes", modulecode_numpy$core$numerictypes, 0, 0, },
    {"numpy.core.overrides", modulecode_numpy$core$overrides, 0, 0, },
    {"numpy.core.records", modulecode_numpy$core$records, 0, 0, },
    {"numpy.core.shape_base", modulecode_numpy$core$shape_base, 0, 0, },
    {"numpy.core.umath", modulecode_numpy$core$umath, 0, 0, },
    {"numpy.ctypeslib", modulecode_numpy$ctypeslib, 0, 0, },
    {"numpy.distutils", NULL, 94, 1485, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.distutils.__config__", NULL, 95, 2537, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils._shell_utils", NULL, 96, 3174, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.ccompiler", NULL, 97, 19069, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.ccompiler_opt", NULL, 98, 70070, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command", NULL, 99, 1020, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.distutils.command.autodist", NULL, 100, 3707, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.bdist_rpm", NULL, 101, 828, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build", NULL, 102, 2255, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build_clib", NULL, 103, 9508, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build_ext", NULL, 104, 14745, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build_py", NULL, 105, 1359, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build_scripts", NULL, 106, 1644, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.build_src", NULL, 107, 18354, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.config", NULL, 108, 13907, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.config_compiler", NULL, 109, 3907, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.develop", NULL, 110, 855, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.egg_info", NULL, 111, 1083, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.install", NULL, 112, 2075, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.install_clib", NULL, 113, 1621, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.install_data", NULL, 114, 883, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.install_headers", NULL, 115, 949, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.command.sdist", NULL, 116, 935, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.conv_template", NULL, 117, 8277, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.core", NULL, 118, 4712, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.cpuinfo", NULL, 119, 32664, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.exec_command", NULL, 120, 9151, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.extension", NULL, 121, 2491, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.fcompiler", NULL, 122, 28230, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.distutils.fcompiler.environment", NULL, 123, 3050, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.from_template", NULL, 124, 7211, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.lib2def", NULL, 125, 3297, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.log", NULL, 126, 2463, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.mingw32ccompiler", NULL, 127, 14519, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.misc_util", NULL, 128, 70460, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.npy_pkg_config", NULL, 129, 12286, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.numpy_distribution", NULL, 130, 776, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.system_info", NULL, 131, 87053, NUITKA_BYTECODE_FLAG},
    {"numpy.distutils.unixccompiler", NULL, 132, 3373, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py", NULL, 133, 3525, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.f2py.__version__", NULL, 134, 328, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.auxfuncs", NULL, 135, 22167, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.capi_maps", NULL, 136, 17989, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.cb_rules", NULL, 137, 16959, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.cfuncs", NULL, 138, 39844, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.common_rules", NULL, 139, 4782, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.crackfortran", NULL, 140, 77713, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.diagnose", NULL, 141, 3719, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.f2py2e", NULL, 142, 20270, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.f2py_testing", NULL, 143, 1393, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.f90mod_rules", NULL, 144, 7304, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.func2subr", NULL, 145, 6584, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.rules", NULL, 146, 34744, NUITKA_BYTECODE_FLAG},
    {"numpy.f2py.use_rules", NULL, 147, 3043, NUITKA_BYTECODE_FLAG},
    {"numpy.fft", modulecode_numpy$fft, 0, 0, NUITKA_PACKAGE_FLAG},
    {"numpy.fft._pocketfft", modulecode_numpy$fft$_pocketfft, 0, 0, },
    {"numpy.fft._pocketfft_internal", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"numpy.fft.helper", modulecode_numpy$fft$helper, 0, 0, },
    {"numpy.lib", modulecode_numpy$lib, 0, 0, NUITKA_PACKAGE_FLAG},
    {"numpy.lib._datasource", modulecode_numpy$lib$_datasource, 0, 0, },
    {"numpy.lib._iotools", modulecode_numpy$lib$_iotools, 0, 0, },
    {"numpy.lib._version", modulecode_numpy$lib$_version, 0, 0, },
    {"numpy.lib.arraypad", modulecode_numpy$lib$arraypad, 0, 0, },
    {"numpy.lib.arraysetops", modulecode_numpy$lib$arraysetops, 0, 0, },
    {"numpy.lib.arrayterator", modulecode_numpy$lib$arrayterator, 0, 0, },
    {"numpy.lib.format", modulecode_numpy$lib$format, 0, 0, },
    {"numpy.lib.function_base", modulecode_numpy$lib$function_base, 0, 0, },
    {"numpy.lib.histograms", modulecode_numpy$lib$histograms, 0, 0, },
    {"numpy.lib.index_tricks", modulecode_numpy$lib$index_tricks, 0, 0, },
    {"numpy.lib.mixins", modulecode_numpy$lib$mixins, 0, 0, },
    {"numpy.lib.nanfunctions", modulecode_numpy$lib$nanfunctions, 0, 0, },
    {"numpy.lib.npyio", modulecode_numpy$lib$npyio, 0, 0, },
    {"numpy.lib.polynomial", modulecode_numpy$lib$polynomial, 0, 0, },
    {"numpy.lib.scimath", modulecode_numpy$lib$scimath, 0, 0, },
    {"numpy.lib.shape_base", modulecode_numpy$lib$shape_base, 0, 0, },
    {"numpy.lib.stride_tricks", modulecode_numpy$lib$stride_tricks, 0, 0, },
    {"numpy.lib.twodim_base", modulecode_numpy$lib$twodim_base, 0, 0, },
    {"numpy.lib.type_check", modulecode_numpy$lib$type_check, 0, 0, },
    {"numpy.lib.ufunclike", modulecode_numpy$lib$ufunclike, 0, 0, },
    {"numpy.lib.utils", modulecode_numpy$lib$utils, 0, 0, },
    {"numpy.linalg", modulecode_numpy$linalg, 0, 0, NUITKA_PACKAGE_FLAG},
    {"numpy.linalg._umath_linalg", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"numpy.linalg.lapack_lite", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"numpy.linalg.linalg", modulecode_numpy$linalg$linalg, 0, 0, },
    {"numpy.ma", modulecode_numpy$ma, 0, 0, NUITKA_PACKAGE_FLAG},
    {"numpy.ma.core", modulecode_numpy$ma$core, 0, 0, },
    {"numpy.ma.extras", modulecode_numpy$ma$extras, 0, 0, },
    {"numpy.ma.mrecords", modulecode_numpy$ma$mrecords, 0, 0, },
    {"numpy.matrixlib", modulecode_numpy$matrixlib, 0, 0, NUITKA_PACKAGE_FLAG},
    {"numpy.matrixlib.defmatrix", modulecode_numpy$matrixlib$defmatrix, 0, 0, },
    {"numpy.polynomial", modulecode_numpy$polynomial, 0, 0, NUITKA_PACKAGE_FLAG},
    {"numpy.polynomial._polybase", modulecode_numpy$polynomial$_polybase, 0, 0, },
    {"numpy.polynomial.chebyshev", modulecode_numpy$polynomial$chebyshev, 0, 0, },
    {"numpy.polynomial.hermite", modulecode_numpy$polynomial$hermite, 0, 0, },
    {"numpy.polynomial.hermite_e", modulecode_numpy$polynomial$hermite_e, 0, 0, },
    {"numpy.polynomial.laguerre", modulecode_numpy$polynomial$laguerre, 0, 0, },
    {"numpy.polynomial.legendre", modulecode_numpy$polynomial$legendre, 0, 0, },
    {"numpy.polynomial.polynomial", modulecode_numpy$polynomial$polynomial, 0, 0, },
    {"numpy.polynomial.polyutils", modulecode_numpy$polynomial$polyutils, 0, 0, },
    {"numpy.random", modulecode_numpy$random, 0, 0, NUITKA_PACKAGE_FLAG},
    {"numpy.random._bounded_integers", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"numpy.random._common", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"numpy.random._generator", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"numpy.random._mt19937", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"numpy.random._pcg64", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"numpy.random._philox", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"numpy.random._pickle", modulecode_numpy$random$_pickle, 0, 0, },
    {"numpy.random._sfc64", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"numpy.random.bit_generator", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"numpy.random.mtrand", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"numpy.testing", NULL, 148, 721, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.testing._private", NULL, 149, 157, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"numpy.testing._private.decorators", NULL, 150, 9010, NUITKA_BYTECODE_FLAG},
    {"numpy.testing._private.noseclasses", NULL, 151, 9915, NUITKA_BYTECODE_FLAG},
    {"numpy.testing._private.nosetester", NULL, 152, 14877, NUITKA_BYTECODE_FLAG},
    {"numpy.testing._private.parameterized", NULL, 153, 15658, NUITKA_BYTECODE_FLAG},
    {"numpy.testing._private.utils", NULL, 154, 70406, NUITKA_BYTECODE_FLAG},
    {"numpy.version", modulecode_numpy$version, 0, 0, },
    {"operator", NULL, 155, 13656, NUITKA_BYTECODE_FLAG},
    {"optparse", NULL, 156, 48022, NUITKA_BYTECODE_FLAG},
    {"pathlib", NULL, 157, 43517, NUITKA_BYTECODE_FLAG},
    {"pdb", NULL, 158, 47157, NUITKA_BYTECODE_FLAG},
    {"pickle", NULL, 159, 46844, NUITKA_BYTECODE_FLAG},
    {"pipes", NULL, 160, 7760, NUITKA_BYTECODE_FLAG},
    {"pkg_resources", NULL, 161, 100378, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor", NULL, 162, 139, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor.appdirs", NULL, 163, 20492, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging", NULL, 164, 527, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources._vendor.packaging.__about__", NULL, 165, 689, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging._compat", NULL, 166, 963, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging._structures", NULL, 167, 2745, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.markers", NULL, 168, 8901, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.requirements", NULL, 169, 3860, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.specifiers", NULL, 170, 19769, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.packaging.version", NULL, 171, 10616, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.pyparsing", NULL, 172, 201616, NUITKA_BYTECODE_FLAG},
    {"pkg_resources._vendor.six", NULL, 173, 24412, NUITKA_BYTECODE_FLAG},
    {"pkg_resources.extern", NULL, 174, 2388, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pkg_resources.py2_warn", NULL, 175, 913, NUITKA_BYTECODE_FLAG},
    {"pkg_resources.py31compat", NULL, 176, 582, NUITKA_BYTECODE_FLAG},
    {"pkgutil", NULL, 177, 16274, NUITKA_BYTECODE_FLAG},
    {"platform", NULL, 178, 24205, NUITKA_BYTECODE_FLAG},
    {"playsound", modulecode_playsound, 0, 0, },
    {"plistlib", NULL, 179, 26618, NUITKA_BYTECODE_FLAG},
    {"posixpath", NULL, 180, 10393, NUITKA_BYTECODE_FLAG},
    {"pprint", NULL, 181, 16246, NUITKA_BYTECODE_FLAG},
    {"psutil", modulecode_psutil, 0, 0, NUITKA_PACKAGE_FLAG},
    {"psutil._common", modulecode_psutil$_common, 0, 0, },
    {"psutil._compat", modulecode_psutil$_compat, 0, 0, },
    {"psutil._psaix", modulecode_psutil$_psaix, 0, 0, },
    {"psutil._psbsd", modulecode_psutil$_psbsd, 0, 0, },
    {"psutil._pslinux", modulecode_psutil$_pslinux, 0, 0, },
    {"psutil._psosx", modulecode_psutil$_psosx, 0, 0, },
    {"psutil._psposix", modulecode_psutil$_psposix, 0, 0, },
    {"psutil._pssunos", modulecode_psutil$_pssunos, 0, 0, },
    {"psutil._psutil_linux", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"psutil._psutil_posix", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"psutil._pswindows", modulecode_psutil$_pswindows, 0, 0, },
    {"pycparser", NULL, 182, 2465, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pycparser.ast_transforms", NULL, 183, 2516, NUITKA_BYTECODE_FLAG},
    {"pycparser.c_ast", NULL, 184, 35272, NUITKA_BYTECODE_FLAG},
    {"pycparser.c_lexer", NULL, 185, 11866, NUITKA_BYTECODE_FLAG},
    {"pycparser.c_parser", NULL, 186, 60603, NUITKA_BYTECODE_FLAG},
    {"pycparser.lextab", NULL, 187, 5613, NUITKA_BYTECODE_FLAG},
    {"pycparser.ply", NULL, 188, 197, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pycparser.ply.lex", NULL, 189, 21397, NUITKA_BYTECODE_FLAG},
    {"pycparser.ply.yacc", NULL, 190, 53038, NUITKA_BYTECODE_FLAG},
    {"pycparser.plyparser", NULL, 191, 4651, NUITKA_BYTECODE_FLAG},
    {"pycparser.yacctab", NULL, 192, 139345, NUITKA_BYTECODE_FLAG},
    {"pydoc", NULL, 193, 84327, NUITKA_BYTECODE_FLAG},
    {"pyparsing", modulecode_pyparsing, 0, 0, },
    {"pyttsx3", modulecode_pyttsx3, 0, 0, NUITKA_PACKAGE_FLAG},
    {"pyttsx3.driver", modulecode_pyttsx3$driver, 0, 0, },
    {"pyttsx3.engine", modulecode_pyttsx3$engine, 0, 0, },
    {"queue", NULL, 194, 10591, NUITKA_BYTECODE_FLAG},
    {"random", NULL, 195, 20073, NUITKA_BYTECODE_FLAG},
    {"re", NULL, 196, 14387, NUITKA_BYTECODE_FLAG},
    {"readline", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"requests", modulecode_requests, 0, 0, NUITKA_PACKAGE_FLAG},
    {"requests.__version__", modulecode_requests$__version__, 0, 0, },
    {"requests._internal_utils", modulecode_requests$_internal_utils, 0, 0, },
    {"requests.adapters", modulecode_requests$adapters, 0, 0, },
    {"requests.api", modulecode_requests$api, 0, 0, },
    {"requests.auth", modulecode_requests$auth, 0, 0, },
    {"requests.certs", modulecode_requests$certs, 0, 0, },
    {"requests.compat", modulecode_requests$compat, 0, 0, },
    {"requests.cookies", modulecode_requests$cookies, 0, 0, },
    {"requests.exceptions", modulecode_requests$exceptions, 0, 0, },
    {"requests.hooks", modulecode_requests$hooks, 0, 0, },
    {"requests.models", modulecode_requests$models, 0, 0, },
    {"requests.packages", modulecode_requests$packages, 0, 0, },
    {"requests.sessions", modulecode_requests$sessions, 0, 0, },
    {"requests.status_codes", modulecode_requests$status_codes, 0, 0, },
    {"requests.structures", modulecode_requests$structures, 0, 0, },
    {"requests.utils", modulecode_requests$utils, 0, 0, },
    {"resource", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"scipy", modulecode_scipy, 0, 0, NUITKA_PACKAGE_FLAG},
    {"scipy.__config__", modulecode_scipy$__config__, 0, 0, },
    {"scipy._distributor_init", modulecode_scipy$_distributor_init, 0, 0, },
    {"scipy._lib", modulecode_scipy$_lib, 0, 0, NUITKA_PACKAGE_FLAG},
    {"scipy._lib._ccallback", modulecode_scipy$_lib$_ccallback, 0, 0, },
    {"scipy._lib._ccallback_c", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"scipy._lib._pep440", modulecode_scipy$_lib$_pep440, 0, 0, },
    {"scipy._lib._testutils", modulecode_scipy$_lib$_testutils, 0, 0, },
    {"scipy._lib.deprecation", modulecode_scipy$_lib$deprecation, 0, 0, },
    {"scipy._lib.messagestream", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"scipy.version", modulecode_scipy$version, 0, 0, },
    {"setuptools", NULL, 197, 7735, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"setuptools._deprecation_warning", NULL, 198, 498, NUITKA_BYTECODE_FLAG},
    {"setuptools._imp", NULL, 199, 2037, NUITKA_BYTECODE_FLAG},
    {"setuptools.archive_util", NULL, 200, 5118, NUITKA_BYTECODE_FLAG},
    {"setuptools.command", NULL, 201, 694, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"setuptools.command.bdist_egg", NULL, 202, 14164, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.bdist_rpm", NULL, 203, 1766, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.develop", NULL, 204, 6483, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.easy_install", NULL, 205, 66564, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.egg_info", NULL, 206, 21709, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.install", NULL, 207, 3998, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.install_scripts", NULL, 208, 2306, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.py36compat", NULL, 209, 4592, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.sdist", NULL, 210, 7841, NUITKA_BYTECODE_FLAG},
    {"setuptools.command.setopt", NULL, 211, 4519, NUITKA_BYTECODE_FLAG},
    {"setuptools.config", NULL, 212, 17878, NUITKA_BYTECODE_FLAG},
    {"setuptools.depends", NULL, 213, 5198, NUITKA_BYTECODE_FLAG},
    {"setuptools.dist", NULL, 214, 42308, NUITKA_BYTECODE_FLAG},
    {"setuptools.extension", NULL, 215, 1943, NUITKA_BYTECODE_FLAG},
    {"setuptools.extern", NULL, 216, 2402, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"setuptools.glob", NULL, 217, 3715, NUITKA_BYTECODE_FLAG},
    {"setuptools.installer", NULL, 218, 4084, NUITKA_BYTECODE_FLAG},
    {"setuptools.monkey", NULL, 219, 4626, NUITKA_BYTECODE_FLAG},
    {"setuptools.namespaces", NULL, 220, 3598, NUITKA_BYTECODE_FLAG},
    {"setuptools.package_index", NULL, 221, 32962, NUITKA_BYTECODE_FLAG},
    {"setuptools.py27compat", NULL, 222, 1731, NUITKA_BYTECODE_FLAG},
    {"setuptools.py31compat", NULL, 223, 1173, NUITKA_BYTECODE_FLAG},
    {"setuptools.py33compat", NULL, 224, 1390, NUITKA_BYTECODE_FLAG},
    {"setuptools.py34compat", NULL, 225, 432, NUITKA_BYTECODE_FLAG},
    {"setuptools.sandbox", NULL, 226, 15518, NUITKA_BYTECODE_FLAG},
    {"setuptools.ssl_support", NULL, 227, 6855, NUITKA_BYTECODE_FLAG},
    {"setuptools.unicode_utils", NULL, 228, 1133, NUITKA_BYTECODE_FLAG},
    {"setuptools.version", NULL, 229, 274, NUITKA_BYTECODE_FLAG},
    {"setuptools.wheel", NULL, 230, 7369, NUITKA_BYTECODE_FLAG},
    {"setuptools.windows_support", NULL, 231, 971, NUITKA_BYTECODE_FLAG},
    {"shlex", NULL, 232, 7501, NUITKA_BYTECODE_FLAG},
    {"shutil", NULL, 233, 36534, NUITKA_BYTECODE_FLAG},
    {"signal", NULL, 234, 2808, NUITKA_BYTECODE_FLAG},
    {"simplejson", modulecode_simplejson, 0, 0, NUITKA_PACKAGE_FLAG},
    {"simplejson._speedups", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"simplejson.compat", modulecode_simplejson$compat, 0, 0, },
    {"simplejson.decoder", modulecode_simplejson$decoder, 0, 0, },
    {"simplejson.encoder", modulecode_simplejson$encoder, 0, 0, },
    {"simplejson.errors", modulecode_simplejson$errors, 0, 0, },
    {"simplejson.ordered_dict", modulecode_simplejson$ordered_dict, 0, 0, },
    {"simplejson.raw_json", modulecode_simplejson$raw_json, 0, 0, },
    {"simplejson.scanner", modulecode_simplejson$scanner, 0, 0, },
    {"sip", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"six", modulecode_six, 0, 0, },
    {"socket", NULL, 235, 27752, NUITKA_BYTECODE_FLAG},
    {"sounddevice", modulecode_sounddevice, 0, 0, },
    {"sre_constants", NULL, 236, 6324, NUITKA_BYTECODE_FLAG},
    {"ssl", NULL, 237, 44561, NUITKA_BYTECODE_FLAG},
    {"stat", NULL, 238, 4337, NUITKA_BYTECODE_FLAG},
    {"string", NULL, 239, 7265, NUITKA_BYTECODE_FLAG},
    {"struct", NULL, 240, 295, NUITKA_BYTECODE_FLAG},
    {"subprocess", NULL, 241, 41905, NUITKA_BYTECODE_FLAG},
    {"sysconfig", NULL, 242, 15643, NUITKA_BYTECODE_FLAG},
    {"tarfile", NULL, 243, 62545, NUITKA_BYTECODE_FLAG},
    {"tempfile", NULL, 244, 26475, NUITKA_BYTECODE_FLAG},
    {"termios", NULL, 0, 0, NUITKA_SHLIB_FLAG},
    {"textwrap", NULL, 245, 13484, NUITKA_BYTECODE_FLAG},
    {"threading", NULL, 246, 39941, NUITKA_BYTECODE_FLAG},
    {"tokenize", NULL, 247, 17125, NUITKA_BYTECODE_FLAG},
    {"tqdm", modulecode_tqdm, 0, 0, NUITKA_PACKAGE_FLAG},
    {"tqdm._dist_ver", modulecode_tqdm$_dist_ver, 0, 0, },
    {"tqdm._monitor", modulecode_tqdm$_monitor, 0, 0, },
    {"tqdm._tqdm_pandas", modulecode_tqdm$_tqdm_pandas, 0, 0, },
    {"tqdm.cli", modulecode_tqdm$cli, 0, 0, },
    {"tqdm.gui", modulecode_tqdm$gui, 0, 0, },
    {"tqdm.notebook", modulecode_tqdm$notebook, 0, 0, },
    {"tqdm.std", modulecode_tqdm$std, 0, 0, },
    {"tqdm.utils", modulecode_tqdm$utils, 0, 0, },
    {"tqdm.version", modulecode_tqdm$version, 0, 0, },
    {"traceback", NULL, 248, 19854, NUITKA_BYTECODE_FLAG},
    {"typing", NULL, 249, 62385, NUITKA_BYTECODE_FLAG},
    {"unittest", NULL, 250, 3082, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"unittest.case", NULL, 251, 50449, NUITKA_BYTECODE_FLAG},
    {"urllib", NULL, 252, 84, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib.error", NULL, 253, 2774, NUITKA_BYTECODE_FLAG},
    {"urllib.parse", NULL, 254, 33897, NUITKA_BYTECODE_FLAG},
    {"urllib.request", NULL, 255, 72496, NUITKA_BYTECODE_FLAG},
    {"urllib3", modulecode_urllib3, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3._collections", modulecode_urllib3$_collections, 0, 0, },
    {"urllib3.connection", modulecode_urllib3$connection, 0, 0, },
    {"urllib3.connectionpool", modulecode_urllib3$connectionpool, 0, 0, },
    {"urllib3.contrib", modulecode_urllib3$contrib, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.contrib._appengine_environ", modulecode_urllib3$contrib$_appengine_environ, 0, 0, },
    {"urllib3.contrib.appengine", modulecode_urllib3$contrib$appengine, 0, 0, },
    {"urllib3.contrib.pyopenssl", modulecode_urllib3$contrib$pyopenssl, 0, 0, },
    {"urllib3.contrib.socks", modulecode_urllib3$contrib$socks, 0, 0, },
    {"urllib3.exceptions", modulecode_urllib3$exceptions, 0, 0, },
    {"urllib3.fields", modulecode_urllib3$fields, 0, 0, },
    {"urllib3.filepost", modulecode_urllib3$filepost, 0, 0, },
    {"urllib3.packages", modulecode_urllib3$packages, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.backports", modulecode_urllib3$packages$backports, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.backports.makefile", modulecode_urllib3$packages$backports$makefile, 0, 0, },
    {"urllib3.packages.ssl_match_hostname", modulecode_urllib3$packages$ssl_match_hostname, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.packages.ssl_match_hostname._implementation", modulecode_urllib3$packages$ssl_match_hostname$_implementation, 0, 0, },
    {"urllib3.poolmanager", modulecode_urllib3$poolmanager, 0, 0, },
    {"urllib3.request", modulecode_urllib3$request, 0, 0, },
    {"urllib3.response", modulecode_urllib3$response, 0, 0, },
    {"urllib3.util", modulecode_urllib3$util, 0, 0, NUITKA_PACKAGE_FLAG},
    {"urllib3.util.connection", modulecode_urllib3$util$connection, 0, 0, },
    {"urllib3.util.queue", modulecode_urllib3$util$queue, 0, 0, },
    {"urllib3.util.request", modulecode_urllib3$util$request, 0, 0, },
    {"urllib3.util.response", modulecode_urllib3$util$response, 0, 0, },
    {"urllib3.util.retry", modulecode_urllib3$util$retry, 0, 0, },
    {"urllib3.util.ssl_", modulecode_urllib3$util$ssl_, 0, 0, },
    {"urllib3.util.timeout", modulecode_urllib3$util$timeout, 0, 0, },
    {"urllib3.util.url", modulecode_urllib3$util$url, 0, 0, },
    {"urllib3.util.wait", modulecode_urllib3$util$wait, 0, 0, },
    {"uuid", NULL, 256, 23631, NUITKA_BYTECODE_FLAG},
    {"vosk", modulecode_vosk, 0, 0, NUITKA_PACKAGE_FLAG},
    {"vosk.vosk_cffi", modulecode_vosk$vosk_cffi, 0, 0, },
    {"warnings", NULL, 257, 13617, NUITKA_BYTECODE_FLAG},
    {"weakref", NULL, 258, 19483, NUITKA_BYTECODE_FLAG},
    {"webbrowser", NULL, 259, 17063, NUITKA_BYTECODE_FLAG},
    {"xml", NULL, 260, 648, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.etree", NULL, 261, 87, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.etree.ElementTree", NULL, 262, 55577, NUITKA_BYTECODE_FLAG},
    {"zipfile", NULL, 263, 58433, NUITKA_BYTECODE_FLAG},
    {"__future__", NULL, 264, 4096, NUITKA_BYTECODE_FLAG},
    {"_bootlocale", NULL, 265, 1208, NUITKA_BYTECODE_FLAG},
    {"_collections_abc", NULL, 266, 28706, NUITKA_BYTECODE_FLAG},
    {"_compat_pickle", NULL, 267, 5466, NUITKA_BYTECODE_FLAG},
    {"_compression", NULL, 268, 4111, NUITKA_BYTECODE_FLAG},
    {"_dummy_thread", NULL, 269, 6002, NUITKA_BYTECODE_FLAG},
    {"_markupbase", NULL, 270, 7755, NUITKA_BYTECODE_FLAG},
    {"_osx_support", NULL, 271, 10277, NUITKA_BYTECODE_FLAG},
    {"_py_abc", NULL, 272, 4635, NUITKA_BYTECODE_FLAG},
    {"_pyio", NULL, 273, 74044, NUITKA_BYTECODE_FLAG},
    {"_sitebuiltins", NULL, 274, 3446, NUITKA_BYTECODE_FLAG},
    {"_strptime", NULL, 275, 16009, NUITKA_BYTECODE_FLAG},
    {"_sysconfigdata__linux_x86_64-linux-gnu", NULL, 276, 21013, NUITKA_BYTECODE_FLAG},
    {"_sysconfigdata__x86_64-linux-gnu", NULL, 277, 21007, NUITKA_BYTECODE_FLAG},
    {"_threading_local", NULL, 278, 6411, NUITKA_BYTECODE_FLAG},
    {"_weakrefset", NULL, 279, 7565, NUITKA_BYTECODE_FLAG},
    {"abc", NULL, 0, 5299, NUITKA_BYTECODE_FLAG},
    {"aifc", NULL, 280, 25439, NUITKA_BYTECODE_FLAG},
    {"argparse", NULL, 1, 62556, NUITKA_BYTECODE_FLAG},
    {"ast", NULL, 2, 16646, NUITKA_BYTECODE_FLAG},
    {"asynchat", NULL, 281, 6816, NUITKA_BYTECODE_FLAG},
    {"asyncio", NULL, 282, 706, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"asyncio.base_events", NULL, 283, 50985, NUITKA_BYTECODE_FLAG},
    {"asyncio.base_futures", NULL, 284, 1688, NUITKA_BYTECODE_FLAG},
    {"asyncio.base_subprocess", NULL, 285, 9381, NUITKA_BYTECODE_FLAG},
    {"asyncio.base_tasks", NULL, 286, 1909, NUITKA_BYTECODE_FLAG},
    {"asyncio.constants", NULL, 287, 546, NUITKA_BYTECODE_FLAG},
    {"asyncio.coroutines", NULL, 288, 6619, NUITKA_BYTECODE_FLAG},
    {"asyncio.events", NULL, 289, 28022, NUITKA_BYTECODE_FLAG},
    {"asyncio.exceptions", NULL, 290, 2463, NUITKA_BYTECODE_FLAG},
    {"asyncio.format_helpers", NULL, 291, 2297, NUITKA_BYTECODE_FLAG},
    {"asyncio.futures", NULL, 292, 11158, NUITKA_BYTECODE_FLAG},
    {"asyncio.locks", NULL, 293, 16333, NUITKA_BYTECODE_FLAG},
    {"asyncio.log", NULL, 294, 191, NUITKA_BYTECODE_FLAG},
    {"asyncio.proactor_events", NULL, 295, 24059, NUITKA_BYTECODE_FLAG},
    {"asyncio.protocols", NULL, 296, 8579, NUITKA_BYTECODE_FLAG},
    {"asyncio.queues", NULL, 297, 8346, NUITKA_BYTECODE_FLAG},
    {"asyncio.runners", NULL, 298, 1903, NUITKA_BYTECODE_FLAG},
    {"asyncio.selector_events", NULL, 299, 29644, NUITKA_BYTECODE_FLAG},
    {"asyncio.sslproto", NULL, 300, 21583, NUITKA_BYTECODE_FLAG},
    {"asyncio.staggered", NULL, 301, 4083, NUITKA_BYTECODE_FLAG},
    {"asyncio.streams", NULL, 302, 20605, NUITKA_BYTECODE_FLAG},
    {"asyncio.subprocess", NULL, 303, 7323, NUITKA_BYTECODE_FLAG},
    {"asyncio.tasks", NULL, 304, 24092, NUITKA_BYTECODE_FLAG},
    {"asyncio.transports", NULL, 305, 12224, NUITKA_BYTECODE_FLAG},
    {"asyncio.trsock", NULL, 306, 8448, NUITKA_BYTECODE_FLAG},
    {"asyncio.unix_events", NULL, 307, 39289, NUITKA_BYTECODE_FLAG},
    {"asyncore", NULL, 308, 15993, NUITKA_BYTECODE_FLAG},
    {"base64", NULL, 3, 17036, NUITKA_BYTECODE_FLAG},
    {"bdb", NULL, 309, 24886, NUITKA_BYTECODE_FLAG},
    {"binhex", NULL, 310, 12100, NUITKA_BYTECODE_FLAG},
    {"bisect", NULL, 4, 2319, NUITKA_BYTECODE_FLAG},
    {"bz2", NULL, 5, 11410, NUITKA_BYTECODE_FLAG},
    {"cProfile", NULL, 311, 5299, NUITKA_BYTECODE_FLAG},
    {"calendar", NULL, 6, 27029, NUITKA_BYTECODE_FLAG},
    {"cgi", NULL, 7, 26272, NUITKA_BYTECODE_FLAG},
    {"cgitb", NULL, 312, 10115, NUITKA_BYTECODE_FLAG},
    {"chunk", NULL, 313, 4804, NUITKA_BYTECODE_FLAG},
    {"cmd", NULL, 314, 12591, NUITKA_BYTECODE_FLAG},
    {"code", NULL, 315, 9878, NUITKA_BYTECODE_FLAG},
    {"codecs", NULL, 8, 33921, NUITKA_BYTECODE_FLAG},
    {"codeop", NULL, 316, 6383, NUITKA_BYTECODE_FLAG},
    {"collections", NULL, 9, 46391, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"collections.abc", NULL, 317, 28705, NUITKA_BYTECODE_FLAG},
    {"colorsys", NULL, 10, 3205, NUITKA_BYTECODE_FLAG},
    {"compileall", NULL, 318, 9375, NUITKA_BYTECODE_FLAG},
    {"concurrent", NULL, 319, 88, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures", NULL, 320, 1064, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"concurrent.futures._base", NULL, 321, 21865, NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.process", NULL, 322, 20265, NUITKA_BYTECODE_FLAG},
    {"concurrent.futures.thread", NULL, 323, 5783, NUITKA_BYTECODE_FLAG},
    {"configparser", NULL, 11, 45683, NUITKA_BYTECODE_FLAG},
    {"contextlib", NULL, 12, 20194, NUITKA_BYTECODE_FLAG},
    {"contextvars", NULL, 324, 208, NUITKA_BYTECODE_FLAG},
    {"copy", NULL, 13, 6952, NUITKA_BYTECODE_FLAG},
    {"copyreg", NULL, 14, 4283, NUITKA_BYTECODE_FLAG},
    {"crypt", NULL, 325, 3352, NUITKA_BYTECODE_FLAG},
    {"csv", NULL, 326, 11875, NUITKA_BYTECODE_FLAG},
    {"ctypes", NULL, 15, 16328, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"ctypes._aix", NULL, 327, 9809, NUITKA_BYTECODE_FLAG},
    {"ctypes._endian", NULL, 328, 1894, NUITKA_BYTECODE_FLAG},
    {"ctypes.util", NULL, 16, 7796, NUITKA_BYTECODE_FLAG},
    {"curses", NULL, 17, 2096, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"curses.ascii", NULL, 329, 3922, NUITKA_BYTECODE_FLAG},
    {"curses.has_key", NULL, 330, 4520, NUITKA_BYTECODE_FLAG},
    {"curses.panel", NULL, 331, 188, NUITKA_BYTECODE_FLAG},
    {"curses.textpad", NULL, 332, 5872, NUITKA_BYTECODE_FLAG},
    {"dataclasses", NULL, 333, 23592, NUITKA_BYTECODE_FLAG},
    {"datetime", NULL, 18, 56943, NUITKA_BYTECODE_FLAG},
    {"dbm", NULL, 334, 4148, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"dbm.dumb", NULL, 335, 7738, NUITKA_BYTECODE_FLAG},
    {"dbm.gnu", NULL, 336, 296, NUITKA_BYTECODE_FLAG},
    {"dbm.ndbm", NULL, 337, 167, NUITKA_BYTECODE_FLAG},
    {"decimal", NULL, 338, 160697, NUITKA_BYTECODE_FLAG},
    {"difflib", NULL, 19, 59403, NUITKA_BYTECODE_FLAG},
    {"dis", NULL, 20, 15767, NUITKA_BYTECODE_FLAG},
    {"distutils", NULL, 21, 340, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils.archive_util", NULL, 339, 6504, NUITKA_BYTECODE_FLAG},
    {"distutils.bcppcompiler", NULL, 340, 6488, NUITKA_BYTECODE_FLAG},
    {"distutils.ccompiler", NULL, 22, 33262, NUITKA_BYTECODE_FLAG},
    {"distutils.cmd", NULL, 23, 13913, NUITKA_BYTECODE_FLAG},
    {"distutils.command", NULL, 24, 499, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"distutils.command.bdist", NULL, 25, 3631, NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_dumb", NULL, 341, 3557, NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_rpm", NULL, 26, 12393, NUITKA_BYTECODE_FLAG},
    {"distutils.command.bdist_wininst", NULL, 342, 8614, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build", NULL, 27, 3846, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_clib", NULL, 28, 4779, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_ext", NULL, 29, 16113, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_py", NULL, 30, 10445, NUITKA_BYTECODE_FLAG},
    {"distutils.command.build_scripts", NULL, 31, 4289, NUITKA_BYTECODE_FLAG},
    {"distutils.command.check", NULL, 343, 4850, NUITKA_BYTECODE_FLAG},
    {"distutils.command.clean", NULL, 344, 2065, NUITKA_BYTECODE_FLAG},
    {"distutils.command.config", NULL, 32, 10192, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install", NULL, 33, 14597, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_data", NULL, 34, 2254, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_egg_info", NULL, 345, 3375, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_headers", NULL, 35, 1673, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_lib", NULL, 346, 5205, NUITKA_BYTECODE_FLAG},
    {"distutils.command.install_scripts", NULL, 36, 2106, NUITKA_BYTECODE_FLAG},
    {"distutils.command.register", NULL, 347, 8420, NUITKA_BYTECODE_FLAG},
    {"distutils.command.sdist", NULL, 37, 14481, NUITKA_BYTECODE_FLAG},
    {"distutils.command.upload", NULL, 348, 4904, NUITKA_BYTECODE_FLAG},
    {"distutils.config", NULL, 349, 3474, NUITKA_BYTECODE_FLAG},
    {"distutils.core", NULL, 38, 6579, NUITKA_BYTECODE_FLAG},
    {"distutils.cygwinccompiler", NULL, 39, 8577, NUITKA_BYTECODE_FLAG},
    {"distutils.debug", NULL, 40, 159, NUITKA_BYTECODE_FLAG},
    {"distutils.dep_util", NULL, 41, 2679, NUITKA_BYTECODE_FLAG},
    {"distutils.dir_util", NULL, 42, 6144, NUITKA_BYTECODE_FLAG},
    {"distutils.dist", NULL, 43, 34457, NUITKA_BYTECODE_FLAG},
    {"distutils.errors", NULL, 44, 5215, NUITKA_BYTECODE_FLAG},
    {"distutils.extension", NULL, 45, 6888, NUITKA_BYTECODE_FLAG},
    {"distutils.fancy_getopt", NULL, 46, 10621, NUITKA_BYTECODE_FLAG},
    {"distutils.file_util", NULL, 47, 5898, NUITKA_BYTECODE_FLAG},
    {"distutils.filelist", NULL, 48, 9832, NUITKA_BYTECODE_FLAG},
    {"distutils.log", NULL, 49, 2280, NUITKA_BYTECODE_FLAG},
    {"distutils.msvccompiler", NULL, 50, 14688, NUITKA_BYTECODE_FLAG},
    {"distutils.spawn", NULL, 51, 5071, NUITKA_BYTECODE_FLAG},
    {"distutils.sysconfig", NULL, 52, 12772, NUITKA_BYTECODE_FLAG},
    {"distutils.text_file", NULL, 350, 8404, NUITKA_BYTECODE_FLAG},
    {"distutils.unixccompiler", NULL, 53, 7049, NUITKA_BYTECODE_FLAG},
    {"distutils.util", NULL, 54, 15511, NUITKA_BYTECODE_FLAG},
    {"distutils.version", NULL, 55, 7276, NUITKA_BYTECODE_FLAG},
    {"distutils.versionpredicate", NULL, 351, 5100, NUITKA_BYTECODE_FLAG},
    {"doctest", NULL, 56, 75939, NUITKA_BYTECODE_FLAG},
    {"dummy_threading", NULL, 57, 1075, NUITKA_BYTECODE_FLAG},
    {"email", NULL, 58, 1647, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email._encoded_words", NULL, 352, 5651, NUITKA_BYTECODE_FLAG},
    {"email._header_value_parser", NULL, 353, 79898, NUITKA_BYTECODE_FLAG},
    {"email._parseaddr", NULL, 354, 12419, NUITKA_BYTECODE_FLAG},
    {"email._policybase", NULL, 355, 14775, NUITKA_BYTECODE_FLAG},
    {"email.base64mime", NULL, 356, 3200, NUITKA_BYTECODE_FLAG},
    {"email.charset", NULL, 357, 11424, NUITKA_BYTECODE_FLAG},
    {"email.contentmanager", NULL, 358, 7326, NUITKA_BYTECODE_FLAG},
    {"email.encoders", NULL, 359, 1577, NUITKA_BYTECODE_FLAG},
    {"email.errors", NULL, 360, 5870, NUITKA_BYTECODE_FLAG},
    {"email.feedparser", NULL, 361, 10607, NUITKA_BYTECODE_FLAG},
    {"email.generator", NULL, 362, 12447, NUITKA_BYTECODE_FLAG},
    {"email.header", NULL, 363, 16404, NUITKA_BYTECODE_FLAG},
    {"email.headerregistry", NULL, 364, 22009, NUITKA_BYTECODE_FLAG},
    {"email.iterators", NULL, 365, 1885, NUITKA_BYTECODE_FLAG},
    {"email.message", NULL, 366, 37843, NUITKA_BYTECODE_FLAG},
    {"email.mime", NULL, 367, 88, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"email.mime.application", NULL, 368, 1424, NUITKA_BYTECODE_FLAG},
    {"email.mime.audio", NULL, 369, 2589, NUITKA_BYTECODE_FLAG},
    {"email.mime.base", NULL, 370, 1006, NUITKA_BYTECODE_FLAG},
    {"email.mime.image", NULL, 371, 1869, NUITKA_BYTECODE_FLAG},
    {"email.mime.message", NULL, 372, 1247, NUITKA_BYTECODE_FLAG},
    {"email.mime.multipart", NULL, 373, 1467, NUITKA_BYTECODE_FLAG},
    {"email.mime.nonmultipart", NULL, 374, 729, NUITKA_BYTECODE_FLAG},
    {"email.mime.text", NULL, 375, 1276, NUITKA_BYTECODE_FLAG},
    {"email.parser", NULL, 59, 5687, NUITKA_BYTECODE_FLAG},
    {"email.policy", NULL, 376, 9623, NUITKA_BYTECODE_FLAG},
    {"email.quoprimime", NULL, 377, 7643, NUITKA_BYTECODE_FLAG},
    {"email.utils", NULL, 60, 9507, NUITKA_BYTECODE_FLAG},
    {"encodings", NULL, 61, 3859, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"encodings.aliases", NULL, 378, 6295, NUITKA_BYTECODE_FLAG},
    {"encodings.ascii", NULL, 379, 1846, NUITKA_BYTECODE_FLAG},
    {"encodings.base64_codec", NULL, 380, 2364, NUITKA_BYTECODE_FLAG},
    {"encodings.big5", NULL, 381, 1374, NUITKA_BYTECODE_FLAG},
    {"encodings.big5hkscs", NULL, 382, 1384, NUITKA_BYTECODE_FLAG},
    {"encodings.bz2_codec", NULL, 383, 3255, NUITKA_BYTECODE_FLAG},
    {"encodings.charmap", NULL, 384, 2856, NUITKA_BYTECODE_FLAG},
    {"encodings.cp037", NULL, 385, 2387, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1006", NULL, 386, 2463, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1026", NULL, 387, 2391, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1125", NULL, 388, 8094, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1140", NULL, 389, 2377, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1250", NULL, 390, 2414, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1251", NULL, 391, 2411, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1252", NULL, 392, 2414, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1253", NULL, 393, 2427, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1254", NULL, 394, 2416, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1255", NULL, 395, 2435, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1256", NULL, 396, 2413, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1257", NULL, 397, 2421, NUITKA_BYTECODE_FLAG},
    {"encodings.cp1258", NULL, 398, 2419, NUITKA_BYTECODE_FLAG},
    {"encodings.cp273", NULL, 399, 2373, NUITKA_BYTECODE_FLAG},
    {"encodings.cp424", NULL, 400, 2417, NUITKA_BYTECODE_FLAG},
    {"encodings.cp437", NULL, 401, 7811, NUITKA_BYTECODE_FLAG},
    {"encodings.cp500", NULL, 402, 2387, NUITKA_BYTECODE_FLAG},
    {"encodings.cp720", NULL, 403, 2484, NUITKA_BYTECODE_FLAG},
    {"encodings.cp737", NULL, 404, 8133, NUITKA_BYTECODE_FLAG},
    {"encodings.cp775", NULL, 405, 7841, NUITKA_BYTECODE_FLAG},
    {"encodings.cp850", NULL, 406, 7472, NUITKA_BYTECODE_FLAG},
    {"encodings.cp852", NULL, 407, 7849, NUITKA_BYTECODE_FLAG},
    {"encodings.cp855", NULL, 408, 8102, NUITKA_BYTECODE_FLAG},
    {"encodings.cp856", NULL, 409, 2449, NUITKA_BYTECODE_FLAG},
    {"encodings.cp857", NULL, 410, 7452, NUITKA_BYTECODE_FLAG},
    {"encodings.cp858", NULL, 411, 7442, NUITKA_BYTECODE_FLAG},
    {"encodings.cp860", NULL, 412, 7790, NUITKA_BYTECODE_FLAG},
    {"encodings.cp861", NULL, 413, 7805, NUITKA_BYTECODE_FLAG},
    {"encodings.cp862", NULL, 414, 7994, NUITKA_BYTECODE_FLAG},
    {"encodings.cp863", NULL, 415, 7805, NUITKA_BYTECODE_FLAG},
    {"encodings.cp864", NULL, 416, 7949, NUITKA_BYTECODE_FLAG},
    {"encodings.cp865", NULL, 417, 7805, NUITKA_BYTECODE_FLAG},
    {"encodings.cp866", NULL, 418, 8138, NUITKA_BYTECODE_FLAG},
    {"encodings.cp869", NULL, 419, 7829, NUITKA_BYTECODE_FLAG},
    {"encodings.cp874", NULL, 420, 2515, NUITKA_BYTECODE_FLAG},
    {"encodings.cp875", NULL, 421, 2384, NUITKA_BYTECODE_FLAG},
    {"encodings.cp932", NULL, 422, 1376, NUITKA_BYTECODE_FLAG},
    {"encodings.cp949", NULL, 423, 1376, NUITKA_BYTECODE_FLAG},
    {"encodings.cp950", NULL, 424, 1376, NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jis_2004", NULL, 425, 1390, NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jisx0213", NULL, 426, 1390, NUITKA_BYTECODE_FLAG},
    {"encodings.euc_jp", NULL, 427, 1378, NUITKA_BYTECODE_FLAG},
    {"encodings.euc_kr", NULL, 428, 1378, NUITKA_BYTECODE_FLAG},
    {"encodings.gb18030", NULL, 429, 1380, NUITKA_BYTECODE_FLAG},
    {"encodings.gb2312", NULL, 430, 1378, NUITKA_BYTECODE_FLAG},
    {"encodings.gbk", NULL, 431, 1372, NUITKA_BYTECODE_FLAG},
    {"encodings.hex_codec", NULL, 432, 2351, NUITKA_BYTECODE_FLAG},
    {"encodings.hp_roman8", NULL, 433, 2588, NUITKA_BYTECODE_FLAG},
    {"encodings.hz", NULL, 434, 1370, NUITKA_BYTECODE_FLAG},
    {"encodings.idna", NULL, 62, 5582, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp", NULL, 435, 1391, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_1", NULL, 436, 1395, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2", NULL, 437, 1395, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_2004", NULL, 438, 1401, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_3", NULL, 439, 1395, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_jp_ext", NULL, 440, 1399, NUITKA_BYTECODE_FLAG},
    {"encodings.iso2022_kr", NULL, 441, 1391, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_1", NULL, 442, 2386, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_10", NULL, 443, 2391, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_11", NULL, 444, 2485, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_13", NULL, 445, 2394, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_14", NULL, 446, 2412, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_15", NULL, 447, 2391, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_16", NULL, 448, 2393, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_2", NULL, 449, 2386, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_3", NULL, 450, 2393, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_4", NULL, 451, 2386, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_5", NULL, 452, 2387, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_6", NULL, 453, 2431, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_7", NULL, 454, 2394, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_8", NULL, 455, 2425, NUITKA_BYTECODE_FLAG},
    {"encodings.iso8859_9", NULL, 456, 2386, NUITKA_BYTECODE_FLAG},
    {"encodings.johab", NULL, 457, 1376, NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_r", NULL, 458, 2438, NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_t", NULL, 459, 2349, NUITKA_BYTECODE_FLAG},
    {"encodings.koi8_u", NULL, 460, 2424, NUITKA_BYTECODE_FLAG},
    {"encodings.kz1048", NULL, 461, 2401, NUITKA_BYTECODE_FLAG},
    {"encodings.latin_1", NULL, 462, 1858, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_arabic", NULL, 463, 7705, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_centeuro", NULL, 464, 2425, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_croatian", NULL, 465, 2433, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_cyrillic", NULL, 466, 2423, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_farsi", NULL, 467, 2367, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_greek", NULL, 468, 2407, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_iceland", NULL, 469, 2426, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_latin2", NULL, 470, 2567, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_roman", NULL, 471, 2424, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_romanian", NULL, 472, 2434, NUITKA_BYTECODE_FLAG},
    {"encodings.mac_turkish", NULL, 473, 2427, NUITKA_BYTECODE_FLAG},
    {"encodings.palmos", NULL, 474, 2414, NUITKA_BYTECODE_FLAG},
    {"encodings.ptcp154", NULL, 475, 2508, NUITKA_BYTECODE_FLAG},
    {"encodings.punycode", NULL, 476, 6280, NUITKA_BYTECODE_FLAG},
    {"encodings.quopri_codec", NULL, 477, 2380, NUITKA_BYTECODE_FLAG},
    {"encodings.raw_unicode_escape", NULL, 478, 1727, NUITKA_BYTECODE_FLAG},
    {"encodings.rot_13", NULL, 479, 2966, NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis", NULL, 480, 1384, NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jis_2004", NULL, 481, 1394, NUITKA_BYTECODE_FLAG},
    {"encodings.shift_jisx0213", NULL, 482, 1394, NUITKA_BYTECODE_FLAG},
    {"encodings.tis_620", NULL, 483, 2476, NUITKA_BYTECODE_FLAG},
    {"encodings.undefined", NULL, 484, 2060, NUITKA_BYTECODE_FLAG},
    {"encodings.unicode_escape", NULL, 485, 1707, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16", NULL, 486, 4837, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_be", NULL, 487, 1615, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_16_le", NULL, 488, 1615, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32", NULL, 489, 4730, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_be", NULL, 490, 1508, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_32_le", NULL, 491, 1508, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_7", NULL, 492, 1536, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8", NULL, 493, 1595, NUITKA_BYTECODE_FLAG},
    {"encodings.utf_8_sig", NULL, 494, 4511, NUITKA_BYTECODE_FLAG},
    {"encodings.uu_codec", NULL, 495, 3214, NUITKA_BYTECODE_FLAG},
    {"encodings.zlib_codec", NULL, 496, 3074, NUITKA_BYTECODE_FLAG},
    {"enum", NULL, 63, 24471, NUITKA_BYTECODE_FLAG},
    {"filecmp", NULL, 497, 8392, NUITKA_BYTECODE_FLAG},
    {"fileinput", NULL, 64, 13338, NUITKA_BYTECODE_FLAG},
    {"fnmatch", NULL, 65, 3297, NUITKA_BYTECODE_FLAG},
    {"formatter", NULL, 498, 17510, NUITKA_BYTECODE_FLAG},
    {"fractions", NULL, 66, 18704, NUITKA_BYTECODE_FLAG},
    {"ftplib", NULL, 499, 27814, NUITKA_BYTECODE_FLAG},
    {"functools", NULL, 67, 27866, NUITKA_BYTECODE_FLAG},
    {"genericpath", NULL, 500, 3966, NUITKA_BYTECODE_FLAG},
    {"getopt", NULL, 501, 6236, NUITKA_BYTECODE_FLAG},
    {"getpass", NULL, 502, 4143, NUITKA_BYTECODE_FLAG},
    {"gettext", NULL, 503, 17965, NUITKA_BYTECODE_FLAG},
    {"glob", NULL, 68, 4308, NUITKA_BYTECODE_FLAG},
    {"gzip", NULL, 69, 18156, NUITKA_BYTECODE_FLAG},
    {"hashlib", NULL, 70, 6692, NUITKA_BYTECODE_FLAG},
    {"heapq", NULL, 71, 14035, NUITKA_BYTECODE_FLAG},
    {"hmac", NULL, 72, 6353, NUITKA_BYTECODE_FLAG},
    {"html", NULL, 73, 3574, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"html.entities", NULL, 504, 50494, NUITKA_BYTECODE_FLAG},
    {"html.parser", NULL, 505, 11163, NUITKA_BYTECODE_FLAG},
    {"http", NULL, 74, 6020, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"http.client", NULL, 506, 34651, NUITKA_BYTECODE_FLAG},
    {"http.cookiejar", NULL, 507, 53607, NUITKA_BYTECODE_FLAG},
    {"http.cookies", NULL, 75, 15233, NUITKA_BYTECODE_FLAG},
    {"http.server", NULL, 508, 34357, NUITKA_BYTECODE_FLAG},
    {"imaplib", NULL, 509, 41307, NUITKA_BYTECODE_FLAG},
    {"imghdr", NULL, 510, 4083, NUITKA_BYTECODE_FLAG},
    {"imp", NULL, 76, 9774, NUITKA_BYTECODE_FLAG},
    {"importlib", NULL, 77, 3714, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"importlib._bootstrap", NULL, 511, 28570, NUITKA_BYTECODE_FLAG},
    {"importlib._bootstrap_external", NULL, 512, 43675, NUITKA_BYTECODE_FLAG},
    {"importlib.abc", NULL, 513, 13538, NUITKA_BYTECODE_FLAG},
    {"importlib.machinery", NULL, 78, 927, NUITKA_BYTECODE_FLAG},
    {"importlib.metadata", NULL, 514, 20805, NUITKA_BYTECODE_FLAG},
    {"importlib.resources", NULL, 515, 6445, NUITKA_BYTECODE_FLAG},
    {"importlib.util", NULL, 79, 9257, NUITKA_BYTECODE_FLAG},
    {"inspect", NULL, 80, 80348, NUITKA_BYTECODE_FLAG},
    {"io", NULL, 81, 3419, NUITKA_BYTECODE_FLAG},
    {"ipaddress", NULL, 82, 59533, NUITKA_BYTECODE_FLAG},
    {"json", NULL, 83, 12564, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"json.decoder", NULL, 516, 9809, NUITKA_BYTECODE_FLAG},
    {"json.encoder", NULL, 517, 11136, NUITKA_BYTECODE_FLAG},
    {"json.scanner", NULL, 518, 1916, NUITKA_BYTECODE_FLAG},
    {"json.tool", NULL, 519, 1861, NUITKA_BYTECODE_FLAG},
    {"keyword", NULL, 520, 963, NUITKA_BYTECODE_FLAG},
    {"lib2to3", NULL, 521, 85, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.btm_matcher", NULL, 522, 4842, NUITKA_BYTECODE_FLAG},
    {"lib2to3.btm_utils", NULL, 523, 6115, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_base", NULL, 524, 6218, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixer_util", NULL, 525, 12163, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes", NULL, 526, 91, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.fixes.fix_apply", NULL, 527, 1638, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_asserts", NULL, 528, 1237, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_basestring", NULL, 529, 621, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_buffer", NULL, 530, 766, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_dict", NULL, 531, 3293, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_except", NULL, 532, 2776, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_exec", NULL, 533, 1107, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_execfile", NULL, 534, 1655, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_exitfunc", NULL, 535, 2264, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_filter", NULL, 536, 2402, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_funcattrs", NULL, 537, 934, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_future", NULL, 538, 742, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_getcwdu", NULL, 539, 746, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_has_key", NULL, 540, 2897, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_idioms", NULL, 541, 3879, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_import", NULL, 542, 2745, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_imports", NULL, 543, 4353, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_imports2", NULL, 544, 504, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_input", NULL, 545, 908, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_intern", NULL, 546, 1092, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_isinstance", NULL, 547, 1509, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_itertools", NULL, 548, 1508, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_itertools_imports", NULL, 549, 1536, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_long", NULL, 550, 663, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_map", NULL, 551, 3055, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_metaclass", NULL, 552, 5305, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_methodattrs", NULL, 553, 896, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_ne", NULL, 554, 769, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_next", NULL, 555, 3041, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_nonzero", NULL, 556, 881, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_numliterals", NULL, 557, 981, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_operator", NULL, 558, 4178, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_paren", NULL, 559, 1348, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_print", NULL, 560, 2301, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_raise", NULL, 561, 2211, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_raw_input", NULL, 562, 753, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_reduce", NULL, 563, 1086, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_reload", NULL, 564, 1104, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_renames", NULL, 565, 1965, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_repr", NULL, 566, 803, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_set_literal", NULL, 567, 1641, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_standarderror", NULL, 568, 678, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_sys_exc", NULL, 569, 1369, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_throw", NULL, 570, 1766, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_tuple_params", NULL, 571, 4549, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_types", NULL, 572, 1795, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_unicode", NULL, 573, 1507, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_urllib", NULL, 574, 5957, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_ws_comma", NULL, 575, 1077, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_xrange", NULL, 576, 2487, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_xreadlines", NULL, 577, 1081, NUITKA_BYTECODE_FLAG},
    {"lib2to3.fixes.fix_zip", NULL, 578, 1541, NUITKA_BYTECODE_FLAG},
    {"lib2to3.main", NULL, 579, 8573, NUITKA_BYTECODE_FLAG},
    {"lib2to3.patcomp", NULL, 580, 5604, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2", NULL, 581, 121, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"lib2to3.pgen2.driver", NULL, 582, 4959, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.grammar", NULL, 583, 5630, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.literals", NULL, 584, 1519, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.parse", NULL, 585, 6463, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.pgen", NULL, 586, 9741, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.token", NULL, 587, 1852, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pgen2.tokenize", NULL, 588, 15237, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pygram", NULL, 589, 1225, NUITKA_BYTECODE_FLAG},
    {"lib2to3.pytree", NULL, 590, 24307, NUITKA_BYTECODE_FLAG},
    {"lib2to3.refactor", NULL, 591, 20405, NUITKA_BYTECODE_FLAG},
    {"linecache", NULL, 84, 3832, NUITKA_BYTECODE_FLAG},
    {"locale", NULL, 85, 34639, NUITKA_BYTECODE_FLAG},
    {"logging", NULL, 86, 64827, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"logging.config", NULL, 592, 23189, NUITKA_BYTECODE_FLAG},
    {"logging.handlers", NULL, 593, 43121, NUITKA_BYTECODE_FLAG},
    {"lzma", NULL, 87, 11983, NUITKA_BYTECODE_FLAG},
    {"mailbox", NULL, 594, 60229, NUITKA_BYTECODE_FLAG},
    {"mailcap", NULL, 595, 6441, NUITKA_BYTECODE_FLAG},
    {"mimetypes", NULL, 88, 15996, NUITKA_BYTECODE_FLAG},
    {"modulefinder", NULL, 596, 16080, NUITKA_BYTECODE_FLAG},
    {"multiprocessing", NULL, 89, 618, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.connection", NULL, 597, 25199, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.context", NULL, 598, 12983, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.dummy", NULL, 599, 3859, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"multiprocessing.dummy.connection", NULL, 600, 2513, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.forkserver", NULL, 601, 8324, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.heap", NULL, 602, 7602, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.managers", NULL, 603, 41511, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.pool", NULL, 90, 24990, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_fork", NULL, 604, 2609, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_forkserver", NULL, 605, 2382, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.popen_spawn_posix", NULL, 606, 2173, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.process", NULL, 607, 10966, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.queues", NULL, 608, 9519, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.reduction", NULL, 609, 8168, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.resource_sharer", NULL, 610, 5221, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.resource_tracker", NULL, 611, 5150, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.shared_memory", NULL, 612, 14281, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.sharedctypes", NULL, 613, 7014, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.spawn", NULL, 614, 6661, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.synchronize", NULL, 615, 11255, NUITKA_BYTECODE_FLAG},
    {"multiprocessing.util", NULL, 616, 11451, NUITKA_BYTECODE_FLAG},
    {"netrc", NULL, 91, 3742, NUITKA_BYTECODE_FLAG},
    {"nntplib", NULL, 617, 33939, NUITKA_BYTECODE_FLAG},
    {"ntpath", NULL, 92, 14622, NUITKA_BYTECODE_FLAG},
    {"nturl2path", NULL, 618, 1566, NUITKA_BYTECODE_FLAG},
    {"numbers", NULL, 93, 12167, NUITKA_BYTECODE_FLAG},
    {"opcode", NULL, 619, 5385, NUITKA_BYTECODE_FLAG},
    {"operator", NULL, 155, 13656, NUITKA_BYTECODE_FLAG},
    {"optparse", NULL, 156, 48022, NUITKA_BYTECODE_FLAG},
    {"os", NULL, 620, 31362, NUITKA_BYTECODE_FLAG},
    {"pathlib", NULL, 157, 43517, NUITKA_BYTECODE_FLAG},
    {"pdb", NULL, 158, 47157, NUITKA_BYTECODE_FLAG},
    {"pickle", NULL, 159, 46844, NUITKA_BYTECODE_FLAG},
    {"pickletools", NULL, 621, 67169, NUITKA_BYTECODE_FLAG},
    {"pipes", NULL, 160, 7760, NUITKA_BYTECODE_FLAG},
    {"pkgutil", NULL, 177, 16274, NUITKA_BYTECODE_FLAG},
    {"platform", NULL, 178, 24205, NUITKA_BYTECODE_FLAG},
    {"plistlib", NULL, 179, 26618, NUITKA_BYTECODE_FLAG},
    {"poplib", NULL, 622, 13424, NUITKA_BYTECODE_FLAG},
    {"posixpath", NULL, 180, 10393, NUITKA_BYTECODE_FLAG},
    {"pprint", NULL, 181, 16246, NUITKA_BYTECODE_FLAG},
    {"profile", NULL, 623, 14579, NUITKA_BYTECODE_FLAG},
    {"pstats", NULL, 624, 22018, NUITKA_BYTECODE_FLAG},
    {"pty", NULL, 625, 3920, NUITKA_BYTECODE_FLAG},
    {"py_compile", NULL, 626, 7359, NUITKA_BYTECODE_FLAG},
    {"pyclbr", NULL, 627, 10416, NUITKA_BYTECODE_FLAG},
    {"pydoc", NULL, 193, 84327, NUITKA_BYTECODE_FLAG},
    {"pydoc_data", NULL, 628, 88, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"pydoc_data.topics", NULL, 629, 420472, NUITKA_BYTECODE_FLAG},
    {"queue", NULL, 194, 10591, NUITKA_BYTECODE_FLAG},
    {"quopri", NULL, 630, 5713, NUITKA_BYTECODE_FLAG},
    {"random", NULL, 195, 20073, NUITKA_BYTECODE_FLAG},
    {"re", NULL, 196, 14387, NUITKA_BYTECODE_FLAG},
    {"reprlib", NULL, 631, 5268, NUITKA_BYTECODE_FLAG},
    {"rlcompleter", NULL, 632, 5720, NUITKA_BYTECODE_FLAG},
    {"runpy", NULL, 633, 8146, NUITKA_BYTECODE_FLAG},
    {"sched", NULL, 634, 6497, NUITKA_BYTECODE_FLAG},
    {"secrets", NULL, 635, 2155, NUITKA_BYTECODE_FLAG},
    {"selectors", NULL, 636, 16900, NUITKA_BYTECODE_FLAG},
    {"shelve", NULL, 637, 9455, NUITKA_BYTECODE_FLAG},
    {"shlex", NULL, 232, 7501, NUITKA_BYTECODE_FLAG},
    {"shutil", NULL, 233, 36534, NUITKA_BYTECODE_FLAG},
    {"signal", NULL, 234, 2808, NUITKA_BYTECODE_FLAG},
    {"site", NULL, 638, 13451, NUITKA_BYTECODE_FLAG},
    {"sitecustomize", NULL, 639, 185, NUITKA_BYTECODE_FLAG},
    {"smtpd", NULL, 640, 26428, NUITKA_BYTECODE_FLAG},
    {"smtplib", NULL, 641, 35278, NUITKA_BYTECODE_FLAG},
    {"sndhdr", NULL, 642, 6954, NUITKA_BYTECODE_FLAG},
    {"socket", NULL, 235, 27752, NUITKA_BYTECODE_FLAG},
    {"socketserver", NULL, 643, 23972, NUITKA_BYTECODE_FLAG},
    {"sqlite3", NULL, 644, 116, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"sqlite3.dbapi2", NULL, 645, 2469, NUITKA_BYTECODE_FLAG},
    {"sqlite3.dump", NULL, 646, 1894, NUITKA_BYTECODE_FLAG},
    {"sre_compile", NULL, 647, 15107, NUITKA_BYTECODE_FLAG},
    {"sre_constants", NULL, 236, 6324, NUITKA_BYTECODE_FLAG},
    {"sre_parse", NULL, 648, 21612, NUITKA_BYTECODE_FLAG},
    {"ssl", NULL, 237, 44561, NUITKA_BYTECODE_FLAG},
    {"stat", NULL, 238, 4337, NUITKA_BYTECODE_FLAG},
    {"statistics", NULL, 649, 33618, NUITKA_BYTECODE_FLAG},
    {"string", NULL, 239, 7265, NUITKA_BYTECODE_FLAG},
    {"stringprep", NULL, 650, 10982, NUITKA_BYTECODE_FLAG},
    {"struct", NULL, 240, 295, NUITKA_BYTECODE_FLAG},
    {"subprocess", NULL, 241, 41905, NUITKA_BYTECODE_FLAG},
    {"sunau", NULL, 651, 17045, NUITKA_BYTECODE_FLAG},
    {"symbol", NULL, 652, 2369, NUITKA_BYTECODE_FLAG},
    {"symtable", NULL, 653, 11041, NUITKA_BYTECODE_FLAG},
    {"sysconfig", NULL, 242, 15643, NUITKA_BYTECODE_FLAG},
    {"tabnanny", NULL, 654, 6995, NUITKA_BYTECODE_FLAG},
    {"tarfile", NULL, 243, 62545, NUITKA_BYTECODE_FLAG},
    {"telnetlib", NULL, 655, 18202, NUITKA_BYTECODE_FLAG},
    {"tempfile", NULL, 244, 26475, NUITKA_BYTECODE_FLAG},
    {"textwrap", NULL, 245, 13484, NUITKA_BYTECODE_FLAG},
    {"this", NULL, 656, 1226, NUITKA_BYTECODE_FLAG},
    {"threading", NULL, 246, 39941, NUITKA_BYTECODE_FLAG},
    {"timeit", NULL, 657, 11742, NUITKA_BYTECODE_FLAG},
    {"token", NULL, 658, 2450, NUITKA_BYTECODE_FLAG},
    {"tokenize", NULL, 247, 17125, NUITKA_BYTECODE_FLAG},
    {"trace", NULL, 659, 19991, NUITKA_BYTECODE_FLAG},
    {"traceback", NULL, 248, 19854, NUITKA_BYTECODE_FLAG},
    {"tracemalloc", NULL, 660, 17328, NUITKA_BYTECODE_FLAG},
    {"tty", NULL, 661, 1041, NUITKA_BYTECODE_FLAG},
    {"types", NULL, 662, 9142, NUITKA_BYTECODE_FLAG},
    {"typing", NULL, 249, 62385, NUITKA_BYTECODE_FLAG},
    {"unittest", NULL, 250, 3082, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"unittest.async_case", NULL, 663, 4105, NUITKA_BYTECODE_FLAG},
    {"unittest.case", NULL, 251, 50449, NUITKA_BYTECODE_FLAG},
    {"unittest.loader", NULL, 664, 14501, NUITKA_BYTECODE_FLAG},
    {"unittest.main", NULL, 665, 7499, NUITKA_BYTECODE_FLAG},
    {"unittest.mock", NULL, 666, 77331, NUITKA_BYTECODE_FLAG},
    {"unittest.result", NULL, 667, 7256, NUITKA_BYTECODE_FLAG},
    {"unittest.runner", NULL, 668, 6981, NUITKA_BYTECODE_FLAG},
    {"unittest.signals", NULL, 669, 2185, NUITKA_BYTECODE_FLAG},
    {"unittest.suite", NULL, 670, 9900, NUITKA_BYTECODE_FLAG},
    {"unittest.util", NULL, 671, 4396, NUITKA_BYTECODE_FLAG},
    {"urllib", NULL, 252, 84, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"urllib.error", NULL, 253, 2774, NUITKA_BYTECODE_FLAG},
    {"urllib.parse", NULL, 254, 33897, NUITKA_BYTECODE_FLAG},
    {"urllib.request", NULL, 255, 72496, NUITKA_BYTECODE_FLAG},
    {"urllib.response", NULL, 672, 3254, NUITKA_BYTECODE_FLAG},
    {"urllib.robotparser", NULL, 673, 7292, NUITKA_BYTECODE_FLAG},
    {"uu", NULL, 674, 3570, NUITKA_BYTECODE_FLAG},
    {"uuid", NULL, 256, 23631, NUITKA_BYTECODE_FLAG},
    {"venv", NULL, 675, 14906, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"warnings", NULL, 257, 13617, NUITKA_BYTECODE_FLAG},
    {"wave", NULL, 676, 18114, NUITKA_BYTECODE_FLAG},
    {"weakref", NULL, 258, 19483, NUITKA_BYTECODE_FLAG},
    {"webbrowser", NULL, 259, 17063, NUITKA_BYTECODE_FLAG},
    {"wsgiref", NULL, 677, 680, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"wsgiref.handlers", NULL, 678, 16411, NUITKA_BYTECODE_FLAG},
    {"wsgiref.headers", NULL, 679, 7721, NUITKA_BYTECODE_FLAG},
    {"wsgiref.simple_server", NULL, 680, 5226, NUITKA_BYTECODE_FLAG},
    {"wsgiref.util", NULL, 681, 5377, NUITKA_BYTECODE_FLAG},
    {"wsgiref.validate", NULL, 682, 14720, NUITKA_BYTECODE_FLAG},
    {"xdrlib", NULL, 683, 8186, NUITKA_BYTECODE_FLAG},
    {"xml", NULL, 260, 648, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom", NULL, 684, 5486, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.dom.NodeFilter", NULL, 685, 932, NUITKA_BYTECODE_FLAG},
    {"xml.dom.domreg", NULL, 686, 2815, NUITKA_BYTECODE_FLAG},
    {"xml.dom.expatbuilder", NULL, 687, 27306, NUITKA_BYTECODE_FLAG},
    {"xml.dom.minicompat", NULL, 688, 2707, NUITKA_BYTECODE_FLAG},
    {"xml.dom.minidom", NULL, 689, 55339, NUITKA_BYTECODE_FLAG},
    {"xml.dom.pulldom", NULL, 690, 10656, NUITKA_BYTECODE_FLAG},
    {"xml.dom.xmlbuilder", NULL, 691, 12459, NUITKA_BYTECODE_FLAG},
    {"xml.etree", NULL, 261, 87, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.etree.ElementInclude", NULL, 692, 1544, NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementPath", NULL, 693, 8399, NUITKA_BYTECODE_FLAG},
    {"xml.etree.ElementTree", NULL, 262, 55577, NUITKA_BYTECODE_FLAG},
    {"xml.etree.cElementTree", NULL, 694, 138, NUITKA_BYTECODE_FLAG},
    {"xml.parsers", NULL, 695, 261, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.parsers.expat", NULL, 696, 299, NUITKA_BYTECODE_FLAG},
    {"xml.sax", NULL, 697, 3175, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xml.sax._exceptions", NULL, 698, 5409, NUITKA_BYTECODE_FLAG},
    {"xml.sax.expatreader", NULL, 699, 12460, NUITKA_BYTECODE_FLAG},
    {"xml.sax.handler", NULL, 700, 12387, NUITKA_BYTECODE_FLAG},
    {"xml.sax.saxutils", NULL, 701, 12884, NUITKA_BYTECODE_FLAG},
    {"xml.sax.xmlreader", NULL, 702, 16809, NUITKA_BYTECODE_FLAG},
    {"xmlrpc", NULL, 703, 84, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG},
    {"xmlrpc.client", NULL, 704, 34504, NUITKA_BYTECODE_FLAG},
    {"xmlrpc.server", NULL, 705, 29373, NUITKA_BYTECODE_FLAG},
    {"zipapp", NULL, 706, 5819, NUITKA_BYTECODE_FLAG},
    {"zipfile", NULL, 263, 58433, NUITKA_BYTECODE_FLAG},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob()
{
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }


}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {
    {"_collections_abc", 266, 28706},
    {"_compression", 268, 4111},
    {"_weakrefset", 279, 7565},
    {"abc", 0, 5299},
    {"base64", 3, 17036},
    {"bz2", 5, 11410},
    {"codecs", 8, 33921},
    {"collections", 9, -46391},
    {"collections.abc", 317, 28705},
    {"copyreg", 14, 4283},
    {"dis", 20, 15767},
    {"encodings", 61, -3859},
    {"encodings.aliases", 378, 6295},
    {"encodings.ascii", 379, 1846},
    {"encodings.base64_codec", 380, 2364},
    {"encodings.big5", 381, 1374},
    {"encodings.big5hkscs", 382, 1384},
    {"encodings.bz2_codec", 383, 3255},
    {"encodings.charmap", 384, 2856},
    {"encodings.cp037", 385, 2387},
    {"encodings.cp1006", 386, 2463},
    {"encodings.cp1026", 387, 2391},
    {"encodings.cp1125", 388, 8094},
    {"encodings.cp1140", 389, 2377},
    {"encodings.cp1250", 390, 2414},
    {"encodings.cp1251", 391, 2411},
    {"encodings.cp1252", 392, 2414},
    {"encodings.cp1253", 393, 2427},
    {"encodings.cp1254", 394, 2416},
    {"encodings.cp1255", 395, 2435},
    {"encodings.cp1256", 396, 2413},
    {"encodings.cp1257", 397, 2421},
    {"encodings.cp1258", 398, 2419},
    {"encodings.cp273", 399, 2373},
    {"encodings.cp424", 400, 2417},
    {"encodings.cp437", 401, 7811},
    {"encodings.cp500", 402, 2387},
    {"encodings.cp720", 403, 2484},
    {"encodings.cp737", 404, 8133},
    {"encodings.cp775", 405, 7841},
    {"encodings.cp850", 406, 7472},
    {"encodings.cp852", 407, 7849},
    {"encodings.cp855", 408, 8102},
    {"encodings.cp856", 409, 2449},
    {"encodings.cp857", 410, 7452},
    {"encodings.cp858", 411, 7442},
    {"encodings.cp860", 412, 7790},
    {"encodings.cp861", 413, 7805},
    {"encodings.cp862", 414, 7994},
    {"encodings.cp863", 415, 7805},
    {"encodings.cp864", 416, 7949},
    {"encodings.cp865", 417, 7805},
    {"encodings.cp866", 418, 8138},
    {"encodings.cp869", 419, 7829},
    {"encodings.cp874", 420, 2515},
    {"encodings.cp875", 421, 2384},
    {"encodings.cp932", 422, 1376},
    {"encodings.cp949", 423, 1376},
    {"encodings.cp950", 424, 1376},
    {"encodings.euc_jis_2004", 425, 1390},
    {"encodings.euc_jisx0213", 426, 1390},
    {"encodings.euc_jp", 427, 1378},
    {"encodings.euc_kr", 428, 1378},
    {"encodings.gb18030", 429, 1380},
    {"encodings.gb2312", 430, 1378},
    {"encodings.gbk", 431, 1372},
    {"encodings.hex_codec", 432, 2351},
    {"encodings.hp_roman8", 433, 2588},
    {"encodings.hz", 434, 1370},
    {"encodings.idna", 62, 5582},
    {"encodings.iso2022_jp", 435, 1391},
    {"encodings.iso2022_jp_1", 436, 1395},
    {"encodings.iso2022_jp_2", 437, 1395},
    {"encodings.iso2022_jp_2004", 438, 1401},
    {"encodings.iso2022_jp_3", 439, 1395},
    {"encodings.iso2022_jp_ext", 440, 1399},
    {"encodings.iso2022_kr", 441, 1391},
    {"encodings.iso8859_1", 442, 2386},
    {"encodings.iso8859_10", 443, 2391},
    {"encodings.iso8859_11", 444, 2485},
    {"encodings.iso8859_13", 445, 2394},
    {"encodings.iso8859_14", 446, 2412},
    {"encodings.iso8859_15", 447, 2391},
    {"encodings.iso8859_16", 448, 2393},
    {"encodings.iso8859_2", 449, 2386},
    {"encodings.iso8859_3", 450, 2393},
    {"encodings.iso8859_4", 451, 2386},
    {"encodings.iso8859_5", 452, 2387},
    {"encodings.iso8859_6", 453, 2431},
    {"encodings.iso8859_7", 454, 2394},
    {"encodings.iso8859_8", 455, 2425},
    {"encodings.iso8859_9", 456, 2386},
    {"encodings.johab", 457, 1376},
    {"encodings.koi8_r", 458, 2438},
    {"encodings.koi8_t", 459, 2349},
    {"encodings.koi8_u", 460, 2424},
    {"encodings.kz1048", 461, 2401},
    {"encodings.latin_1", 462, 1858},
    {"encodings.mac_arabic", 463, 7705},
    {"encodings.mac_centeuro", 464, 2425},
    {"encodings.mac_croatian", 465, 2433},
    {"encodings.mac_cyrillic", 466, 2423},
    {"encodings.mac_farsi", 467, 2367},
    {"encodings.mac_greek", 468, 2407},
    {"encodings.mac_iceland", 469, 2426},
    {"encodings.mac_latin2", 470, 2567},
    {"encodings.mac_roman", 471, 2424},
    {"encodings.mac_romanian", 472, 2434},
    {"encodings.mac_turkish", 473, 2427},
    {"encodings.palmos", 474, 2414},
    {"encodings.ptcp154", 475, 2508},
    {"encodings.punycode", 476, 6280},
    {"encodings.quopri_codec", 477, 2380},
    {"encodings.raw_unicode_escape", 478, 1727},
    {"encodings.rot_13", 479, 2966},
    {"encodings.shift_jis", 480, 1384},
    {"encodings.shift_jis_2004", 481, 1394},
    {"encodings.shift_jisx0213", 482, 1394},
    {"encodings.tis_620", 483, 2476},
    {"encodings.undefined", 484, 2060},
    {"encodings.unicode_escape", 485, 1707},
    {"encodings.utf_16", 486, 4837},
    {"encodings.utf_16_be", 487, 1615},
    {"encodings.utf_16_le", 488, 1615},
    {"encodings.utf_32", 489, 4730},
    {"encodings.utf_32_be", 490, 1508},
    {"encodings.utf_32_le", 491, 1508},
    {"encodings.utf_7", 492, 1536},
    {"encodings.utf_8", 493, 1595},
    {"encodings.utf_8_sig", 494, 4511},
    {"encodings.uu_codec", 495, 3214},
    {"encodings.zlib_codec", 496, 3074},
    {"enum", 63, 24471},
    {"functools", 67, 27866},
    {"genericpath", 500, 3966},
    {"heapq", 71, 14035},
    {"importlib", 77, -3714},
    {"importlib._bootstrap", 511, 28570},
    {"importlib._bootstrap_external", 512, 43675},
    {"importlib.machinery", 78, 927},
    {"inspect", 80, 80348},
    {"io", 81, 3419},
    {"keyword", 520, 963},
    {"linecache", 84, 3832},
    {"locale", 85, 34639},
    {"opcode", 619, 5385},
    {"operator", 155, 13656},
    {"os", 620, 31362},
    {"posixpath", 180, 10393},
    {"quopri", 630, 5713},
    {"re", 196, 14387},
    {"reprlib", 631, 5268},
    {"sre_compile", 647, 15107},
    {"sre_constants", 236, 6324},
    {"sre_parse", 648, 21612},
    {"stat", 238, 4337},
    {"stringprep", 650, 10982},
    {"struct", 240, 295},
    {"threading", 246, 39941},
    {"token", 658, 2450},
    {"tokenize", 247, 17125},
    {"types", 662, 9142},
    {"warnings", 257, 13617},
    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}


