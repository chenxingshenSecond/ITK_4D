#include <vcl_compiler.h>
// Disable warning
#ifdef VCL_VC_DOTNET
// 4146: unary minus operator applied to unsigned type, result still unsigned
# pragma warning(disable:4146)
#endif //VCL_VC_DOTNET

#include <vnl/vnl_matrix.hxx>
VNL_MATRIX_INSTANTIATE(unsigned char);
