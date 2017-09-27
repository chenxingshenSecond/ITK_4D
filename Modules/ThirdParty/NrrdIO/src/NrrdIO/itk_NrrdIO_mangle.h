#ifndef itk_NrrdIO_mangle_h
#define itk_NrrdIO_mangle_h

/*
This header file mangles all symbols exported from the
NrrdIO library. It is included in all files while building
the NrrdIO library.  Due to namespace pollution, no NrrdIO
headers should be included in .h files in ITK.

This file was created via the mangle.pl script in the
NrrdIO distribution:

  perl mangle.pl itk > itk_NrrdIO_mangle.h

This uses nm to list all text (T), data (D) symbols, as well
read-only (R) things (seen on Linux) and "other" (S) things
(seen on Mac).  On Macs, the preceeding underscore is removed.

Also ensures that a few others starting with nrrd are included, and
prevents variables ending with .N* where N is some number, from inclusion.
*/

#define airExists itk_airExists
#define airFPClass_d itk_airFPClass_d
#define airFPClass_f itk_airFPClass_f
#define airFPFprintf_d itk_airFPFprintf_d
#define airFPFprintf_f itk_airFPFprintf_f
#define airFPGen_d itk_airFPGen_d
#define airFPGen_f itk_airFPGen_f
#define airFPPartsToVal_d itk_airFPPartsToVal_d
#define airFPPartsToVal_f itk_airFPPartsToVal_f
#define airFPValToParts_d itk_airFPValToParts_d
#define airFPValToParts_f itk_airFPValToParts_f
#define airFloatNegInf itk_airFloatNegInf
#define airFloatPosInf itk_airFloatPosInf
#define airFloatQNaN itk_airFloatQNaN
#define airFloatSNaN itk_airFloatSNaN
#define airIsInf_d itk_airIsInf_d
#define airIsInf_f itk_airIsInf_f
#define airIsNaN itk_airIsNaN
#define airMyQNaNHiBit itk_airMyQNaNHiBit
#define airNaN itk_airNaN
#define airMopAdd itk_airMopAdd
#define airMopDebug itk_airMopDebug
#define airMopDone itk_airMopDone
#define airMopError itk_airMopError
#define airMopMem itk_airMopMem
#define airMopNew itk_airMopNew
#define airMopOkay itk_airMopOkay
#define airMopPrint itk_airMopPrint
#define airMopSub itk_airMopSub
#define airMopUnMem itk_airMopUnMem
#define airArrayLenIncr itk_airArrayLenIncr
#define airArrayLenSet itk_airArrayLenSet
#define airArrayNew itk_airArrayNew
#define airArrayNix itk_airArrayNix
#define airArrayNuke itk_airArrayNuke
#define airArrayPointerCB itk_airArrayPointerCB
#define airArrayStructCB itk_airArrayStructCB
#define airAtod itk_airAtod
#define airBool itk_airBool
#define airParseStr itk_airParseStr
#define airParseStrB itk_airParseStrB
#define airParseStrC itk_airParseStrC
#define airParseStrD itk_airParseStrD
#define airParseStrE itk_airParseStrE
#define airParseStrF itk_airParseStrF
#define airParseStrI itk_airParseStrI
#define airParseStrLI itk_airParseStrLI
#define airParseStrS itk_airParseStrS
#define airParseStrUI itk_airParseStrUI
#define airParseStrULI itk_airParseStrULI
#define airParseStrZ itk_airParseStrZ
#define airSingleSscanf itk_airSingleSscanf
#define airDioInfo itk_airDioInfo
#define airDioMalloc itk_airDioMalloc
#define airDioRead itk_airDioRead
#define airDioTest itk_airDioTest
#define airDioWrite itk_airDioWrite
#define airDisableDio itk_airDisableDio
#define airMyDio itk_airMyDio
#define airNoDioErr itk_airNoDioErr
#define airInsaneErr itk_airInsaneErr
#define airSanity itk_airSanity
#define airEndian itk_airEndian
#define airMyEndian itk_airMyEndian
#define airEndsWith itk_airEndsWith
#define airOneLine itk_airOneLine
#define airOneLinify itk_airOneLinify
#define airStrcpy itk_airStrcpy
#define airStrdup itk_airStrdup
#define airStrlen itk_airStrlen
#define airStrntok itk_airStrntok
#define airStrtok itk_airStrtok
#define airStrtokQuoting itk_airStrtokQuoting
#define airStrtrans itk_airStrtrans
#define airToLower itk_airToLower
#define airToUpper itk_airToUpper
#define airUnescape itk_airUnescape
#define airEnumDesc itk_airEnumDesc
#define airEnumFmtDesc itk_airEnumFmtDesc
#define airEnumPrint itk_airEnumPrint
#define airEnumStr itk_airEnumStr
#define airEnumUnknown itk_airEnumUnknown
#define airEnumVal itk_airEnumVal
#define airEnumValCheck itk_airEnumValCheck
#define _airSanityHelper itk__airSanityHelper
#define airFclose itk_airFclose
#define airFopen itk_airFopen
#define airFree itk_airFree
#define airNull itk_airNull
#define airSetNull itk_airSetNull
#define airSinglePrintf itk_airSinglePrintf
#define airSprintPtrdiff_t itk_airSprintPtrdiff_t
#define airSprintSize_t itk_airSprintSize_t
#define airTeemReleaseDate itk_airTeemReleaseDate
#define airTeemVersion itk_airTeemVersion
#define biffAdd itk_biffAdd
#define biffAddf itk_biffAddf
#define biffCheck itk_biffCheck
#define biffDone itk_biffDone
#define biffGet itk_biffGet
#define biffGetDone itk_biffGetDone
#define biffGetStrlen itk_biffGetStrlen
#define biffMaybeAdd itk_biffMaybeAdd
#define biffMaybeAddf itk_biffMaybeAddf
#define biffMove itk_biffMove
#define biffMovef itk_biffMovef
#define biffSetStr itk_biffSetStr
#define _biffMsgAddVL itk__biffMsgAddVL
#define _biffMsgMoveVL itk__biffMsgMoveVL
#define _biffMsgNoop itk__biffMsgNoop
#define biffMsgAdd itk_biffMsgAdd
#define biffMsgClear itk_biffMsgClear
#define biffMsgErrNum itk_biffMsgErrNum
#define biffMsgLineLenMax itk_biffMsgLineLenMax
#define biffMsgMove itk_biffMsgMove
#define biffMsgMovef itk_biffMsgMovef
#define biffMsgNew itk_biffMsgNew
#define biffMsgNix itk_biffMsgNix
#define biffMsgNoop itk_biffMsgNoop
#define biffMsgStrAlloc itk_biffMsgStrAlloc
#define biffMsgStrGet itk_biffMsgStrGet
#define biffMsgStrSet itk_biffMsgStrSet
#define biffMsgStrlen itk_biffMsgStrlen
#define nrrdDInsert itk_nrrdDInsert
#define nrrdDLoad itk_nrrdDLoad
#define nrrdDLookup itk_nrrdDLookup
#define nrrdDStore itk_nrrdDStore
#define nrrdFInsert itk_nrrdFInsert
#define nrrdFLoad itk_nrrdFLoad
#define nrrdFLookup itk_nrrdFLookup
#define nrrdFStore itk_nrrdFStore
#define nrrdIInsert itk_nrrdIInsert
#define nrrdILoad itk_nrrdILoad
#define nrrdILookup itk_nrrdILookup
#define nrrdIStore itk_nrrdIStore
#define nrrdSprint itk_nrrdSprint
#define nrrdUIInsert itk_nrrdUIInsert
#define nrrdUILoad itk_nrrdUILoad
#define nrrdUILookup itk_nrrdUILookup
#define nrrdUIStore itk_nrrdUIStore
#define _nrrdLLongMaxHelp itk__nrrdLLongMaxHelp
#define _nrrdLLongMinHelp itk__nrrdLLongMinHelp
#define _nrrdULLongMaxHelp itk__nrrdULLongMaxHelp
#define nrrdDefaultCenter itk_nrrdDefaultCenter
#define nrrdDefaultSpacing itk_nrrdDefaultSpacing
#define nrrdDefaultWriteBareText itk_nrrdDefaultWriteBareText
#define nrrdDefaultWriteCharsPerLine itk_nrrdDefaultWriteCharsPerLine
#define nrrdDefaultWriteEncodingType itk_nrrdDefaultWriteEncodingType
#define nrrdDefaultWriteValsPerLine itk_nrrdDefaultWriteValsPerLine
#define nrrdStateAlwaysSetContent itk_nrrdStateAlwaysSetContent
#define nrrdStateDisableContent itk_nrrdStateDisableContent
#define nrrdStateGrayscaleImage3D itk_nrrdStateGrayscaleImage3D
#define nrrdStateKeyValuePairsPropagate itk_nrrdStateKeyValuePairsPropagate
#define nrrdStateKeyValueReturnInternalPointers itk_nrrdStateKeyValueReturnInternalPointers
#define nrrdStateKindNoop itk_nrrdStateKindNoop
#define nrrdStateUnknownContent itk_nrrdStateUnknownContent
#define nrrdStateVerboseIO itk_nrrdStateVerboseIO
#define _nrrdEncodingType itk__nrrdEncodingType
#define _nrrdFormatType itk__nrrdFormatType
#define _nrrdType itk__nrrdType
#define nrrdCenter itk_nrrdCenter
#define nrrdEncodingType itk_nrrdEncodingType
#define nrrdField itk_nrrdField
#define nrrdFormatType itk_nrrdFormatType
#define nrrdKind itk_nrrdKind
#define nrrdSpace itk_nrrdSpace
#define nrrdSpacingStatus itk_nrrdSpacingStatus
#define nrrdType itk_nrrdType
#define _nrrdFieldOnePerAxis itk__nrrdFieldOnePerAxis
#define _nrrdFieldRequired itk__nrrdFieldRequired
#define _nrrdFieldValidInImage itk__nrrdFieldValidInImage
#define _nrrdFieldValidInText itk__nrrdFieldValidInText
#define nrrdTypeIsIntegral itk_nrrdTypeIsIntegral
#define nrrdTypeIsUnsigned itk_nrrdTypeIsUnsigned
#define nrrdTypeMax itk_nrrdTypeMax
#define nrrdTypeMin itk_nrrdTypeMin
#define nrrdTypePrintfStr itk_nrrdTypePrintfStr
#define nrrdTypeSize itk_nrrdTypeSize
#define _nrrdCopy itk__nrrdCopy
#define _nrrdMaybeAllocMaybeZero_nva itk__nrrdMaybeAllocMaybeZero_nva
#define _nrrdSizeCheck itk__nrrdSizeCheck
#define nrrdAlloc_nva itk_nrrdAlloc_nva
#define nrrdAlloc_va itk_nrrdAlloc_va
#define nrrdBasicInfoCopy itk_nrrdBasicInfoCopy
#define nrrdBasicInfoInit itk_nrrdBasicInfoInit
#define nrrdCopy itk_nrrdCopy
#define nrrdEmpty itk_nrrdEmpty
#define nrrdInit itk_nrrdInit
#define nrrdIoStateInit itk_nrrdIoStateInit
#define nrrdIoStateNew itk_nrrdIoStateNew
#define nrrdIoStateNix itk_nrrdIoStateNix
#define nrrdMaybeAlloc_nva itk_nrrdMaybeAlloc_nva
#define nrrdMaybeAlloc_va itk_nrrdMaybeAlloc_va
#define nrrdNew itk_nrrdNew
#define nrrdNix itk_nrrdNix
#define nrrdNuke itk_nrrdNuke
#define nrrdWrap_nva itk_nrrdWrap_nva
#define nrrdWrap_va itk_nrrdWrap_va
#define nrrdAxesInsert itk_nrrdAxesInsert
#define nrrdAxesPermute itk_nrrdAxesPermute
#define nrrdInvertPerm itk_nrrdInvertPerm
#define nrrdShuffle itk_nrrdShuffle
#define _nrrdAxisInfoCopy itk__nrrdAxisInfoCopy
#define _nrrdAxisInfoInit itk__nrrdAxisInfoInit
#define _nrrdAxisInfoNewInit itk__nrrdAxisInfoNewInit
#define _nrrdCenter itk__nrrdCenter
#define _nrrdCenter2 itk__nrrdCenter2
#define _nrrdKindAltered itk__nrrdKindAltered
#define _nrrdSpaceVecExists itk__nrrdSpaceVecExists
#define nrrdAxisInfoCopy itk_nrrdAxisInfoCopy
#define nrrdAxisInfoGet_nva itk_nrrdAxisInfoGet_nva
#define nrrdAxisInfoGet_va itk_nrrdAxisInfoGet_va
#define nrrdAxisInfoIdx itk_nrrdAxisInfoIdx
#define nrrdAxisInfoIdxRange itk_nrrdAxisInfoIdxRange
#define nrrdAxisInfoMinMaxSet itk_nrrdAxisInfoMinMaxSet
#define nrrdAxisInfoPos itk_nrrdAxisInfoPos
#define nrrdAxisInfoPosRange itk_nrrdAxisInfoPosRange
#define nrrdAxisInfoSet_nva itk_nrrdAxisInfoSet_nva
#define nrrdAxisInfoSet_va itk_nrrdAxisInfoSet_va
#define nrrdAxisInfoSpacingSet itk_nrrdAxisInfoSpacingSet
#define nrrdDomainAxesGet itk_nrrdDomainAxesGet
#define nrrdKindIsDomain itk_nrrdKindIsDomain
#define nrrdKindSize itk_nrrdKindSize
#define nrrdNonSpatialAxesGet itk_nrrdNonSpatialAxesGet
#define nrrdOrientationReduce itk_nrrdOrientationReduce
#define nrrdRangeAxesGet itk_nrrdRangeAxesGet
#define nrrdSpacingCalculate itk_nrrdSpacingCalculate
#define nrrdSpatialAxesGet itk_nrrdSpatialAxesGet
#define _nrrdCheck itk__nrrdCheck
#define _nrrdContentGet itk__nrrdContentGet
#define _nrrdContentSet_nva itk__nrrdContentSet_nva
#define _nrrdContentSet_va itk__nrrdContentSet_va
#define _nrrdFieldCheck itk__nrrdFieldCheck
#define _nrrdSplitSizes itk__nrrdSplitSizes
#define nrrdBiffKey itk_nrrdBiffKey
#define nrrdCheck itk_nrrdCheck
#define nrrdContentSet_va itk_nrrdContentSet_va
#define nrrdDescribe itk_nrrdDescribe
#define nrrdElementNumber itk_nrrdElementNumber
#define nrrdElementSize itk_nrrdElementSize
#define nrrdOriginCalculate itk_nrrdOriginCalculate
#define nrrdSameSize itk_nrrdSameSize
#define nrrdSanity itk_nrrdSanity
#define nrrdSpaceDimension itk_nrrdSpaceDimension
#define nrrdSpaceDimensionSet itk_nrrdSpaceDimensionSet
#define nrrdSpaceOriginGet itk_nrrdSpaceOriginGet
#define nrrdSpaceOriginSet itk_nrrdSpaceOriginSet
#define nrrdSpaceSet itk_nrrdSpaceSet
#define nrrdSpaceVecCopy itk_nrrdSpaceVecCopy
#define nrrdSpaceVecExists itk_nrrdSpaceVecExists
#define nrrdSpaceVecNorm itk_nrrdSpaceVecNorm
#define nrrdSpaceVecScale itk_nrrdSpaceVecScale
#define nrrdSpaceVecScaleAdd2 itk_nrrdSpaceVecScaleAdd2
#define nrrdSpaceVecSetNaN itk_nrrdSpaceVecSetNaN
#define nrrdCommentAdd itk_nrrdCommentAdd
#define nrrdCommentClear itk_nrrdCommentClear
#define nrrdCommentCopy itk_nrrdCommentCopy
#define _nrrdKeyValueWrite itk__nrrdKeyValueWrite
#define _nrrdWriteEscaped itk__nrrdWriteEscaped
#define nrrdKeyValueAdd itk_nrrdKeyValueAdd
#define nrrdKeyValueClear itk_nrrdKeyValueClear
#define nrrdKeyValueCopy itk_nrrdKeyValueCopy
#define nrrdKeyValueErase itk_nrrdKeyValueErase
#define nrrdKeyValueGet itk_nrrdKeyValueGet
#define nrrdKeyValueIndex itk_nrrdKeyValueIndex
#define nrrdKeyValueSize itk_nrrdKeyValueSize
#define nrrdSwapEndian itk_nrrdSwapEndian
#define _nrrdContainsPercentThisAndMore itk__nrrdContainsPercentThisAndMore
#define _nrrdDataFNCheck itk__nrrdDataFNCheck
#define _nrrdDataFNNumber itk__nrrdDataFNNumber
#define _nrrdReadNrrdParseField itk__nrrdReadNrrdParseField
#define _nrrdSpaceVectorParse itk__nrrdSpaceVectorParse
#define nrrdFieldInfoParse itk_nrrdFieldInfoParse
#define _nrrdGzClose itk__nrrdGzClose
#define _nrrdGzDummySymbol itk__nrrdGzDummySymbol
#define _nrrdGzOpen itk__nrrdGzOpen
#define _nrrdGzRead itk__nrrdGzRead
#define _nrrdGzWrite itk__nrrdGzWrite
#define _nrrdCalloc itk__nrrdCalloc
#define _nrrdFieldSep itk__nrrdFieldSep
#define _nrrdHeaderStringOneLine itk__nrrdHeaderStringOneLine
#define _nrrdHeaderStringOneLineStrlen itk__nrrdHeaderStringOneLineStrlen
#define _nrrdLineSep itk__nrrdLineSep
#define _nrrdNoSpaceVector itk__nrrdNoSpaceVector
#define _nrrdOneLine itk__nrrdOneLine
#define _nrrdRead itk__nrrdRead
#define _nrrdRelativePathFlag itk__nrrdRelativePathFlag
#define _nrrdSplitName itk__nrrdSplitName
#define _nrrdTextSep itk__nrrdTextSep
#define nrrdByteSkip itk_nrrdByteSkip
#define nrrdLineSkip itk_nrrdLineSkip
#define nrrdLoad itk_nrrdLoad
#define nrrdLoadMulti itk_nrrdLoadMulti
#define nrrdRead itk_nrrdRead
#define nrrdStringRead itk_nrrdStringRead
#define _nrrdEncodingMaybeSet itk__nrrdEncodingMaybeSet
#define _nrrdFieldInteresting itk__nrrdFieldInteresting
#define _nrrdFormatMaybeGuess itk__nrrdFormatMaybeGuess
#define _nrrdFormatMaybeSet itk__nrrdFormatMaybeSet
#define _nrrdFprintFieldInfo itk__nrrdFprintFieldInfo
#define _nrrdSprintFieldInfo itk__nrrdSprintFieldInfo
#define _nrrdStrcatSpaceVector itk__nrrdStrcatSpaceVector
#define _nrrdWrite itk__nrrdWrite
#define nrrdIoStateEncodingGet itk_nrrdIoStateEncodingGet
#define nrrdIoStateEncodingSet itk_nrrdIoStateEncodingSet
#define nrrdIoStateFormatGet itk_nrrdIoStateFormatGet
#define nrrdIoStateFormatSet itk_nrrdIoStateFormatSet
#define nrrdIoStateGet itk_nrrdIoStateGet
#define nrrdIoStateSet itk_nrrdIoStateSet
#define nrrdSave itk_nrrdSave
#define nrrdSaveMulti itk_nrrdSaveMulti
#define nrrdStringWrite itk_nrrdStringWrite
#define nrrdWrite itk_nrrdWrite
#define nrrdFormatArray itk_nrrdFormatArray
#define nrrdFormatUnknown itk_nrrdFormatUnknown
#define _nrrdFormatNRRD itk__nrrdFormatNRRD
#define _nrrdFormatNRRD_whichVersion itk__nrrdFormatNRRD_whichVersion
#define _nrrdFormatURLLine0 itk__nrrdFormatURLLine0
#define _nrrdFormatURLLine1 itk__nrrdFormatURLLine1
#define _nrrdHeaderCheck itk__nrrdHeaderCheck
#define nrrdFormatNRRD itk_nrrdFormatNRRD
#define nrrdIoStateDataFileIterBegin itk_nrrdIoStateDataFileIterBegin
#define nrrdIoStateDataFileIterNext itk_nrrdIoStateDataFileIterNext
#define _nrrdEncodingUnknown itk__nrrdEncodingUnknown
#define nrrdEncodingArray itk_nrrdEncodingArray
#define nrrdEncodingUnknown itk_nrrdEncodingUnknown
#define _nrrdEncodingRaw itk__nrrdEncodingRaw
#define nrrdEncodingRaw itk_nrrdEncodingRaw
#define _nrrdEncodingAscii itk__nrrdEncodingAscii
#define nrrdEncodingAscii itk_nrrdEncodingAscii
#define _nrrdEncodingHex itk__nrrdEncodingHex
#define nrrdEncodingHex itk_nrrdEncodingHex
#define _nrrdEncodingGzip itk__nrrdEncodingGzip
#define nrrdEncodingGzip itk_nrrdEncodingGzip
#define nrrdCrop itk_nrrdCrop
#define nrrdSlice itk_nrrdSlice
#define _nrrdEncodingBzip2 itk__nrrdEncodingBzip2
#define _nrrdEncodingBzip2_available itk__nrrdEncodingBzip2_available
#define _nrrdEncodingBzip2_read itk__nrrdEncodingBzip2_read
#define _nrrdEncodingBzip2_write itk__nrrdEncodingBzip2_write
#define nrrdEncodingBzip2 itk_nrrdEncodingBzip2
#define _nrrdFormatEPS itk__nrrdFormatEPS
#define _nrrdFormatEPS_available itk__nrrdFormatEPS_available
#define _nrrdFormatEPS_contentStartsLike itk__nrrdFormatEPS_contentStartsLike
#define _nrrdFormatEPS_fitsInto itk__nrrdFormatEPS_fitsInto
#define _nrrdFormatEPS_nameLooksLike itk__nrrdFormatEPS_nameLooksLike
#define _nrrdFormatEPS_read itk__nrrdFormatEPS_read
#define _nrrdFormatEPS_write itk__nrrdFormatEPS_write
#define nrrdFormatEPS itk_nrrdFormatEPS
#define _nrrdFormatPNG itk__nrrdFormatPNG
#define _nrrdFormatPNG_available itk__nrrdFormatPNG_available
#define _nrrdFormatPNG_contentStartsLike itk__nrrdFormatPNG_contentStartsLike
#define _nrrdFormatPNG_fitsInto itk__nrrdFormatPNG_fitsInto
#define _nrrdFormatPNG_nameLooksLike itk__nrrdFormatPNG_nameLooksLike
#define _nrrdFormatPNG_read itk__nrrdFormatPNG_read
#define _nrrdFormatPNG_write itk__nrrdFormatPNG_write
#define nrrdFormatPNG itk_nrrdFormatPNG
#define _nrrdFormatPNM itk__nrrdFormatPNM
#define _nrrdFormatPNM_available itk__nrrdFormatPNM_available
#define _nrrdFormatPNM_contentStartsLike itk__nrrdFormatPNM_contentStartsLike
#define _nrrdFormatPNM_fitsInto itk__nrrdFormatPNM_fitsInto
#define _nrrdFormatPNM_nameLooksLike itk__nrrdFormatPNM_nameLooksLike
#define _nrrdFormatPNM_read itk__nrrdFormatPNM_read
#define _nrrdFormatPNM_write itk__nrrdFormatPNM_write
#define nrrdFormatPNM itk_nrrdFormatPNM
#define _nrrdFormatText itk__nrrdFormatText
#define _nrrdFormatText_available itk__nrrdFormatText_available
#define _nrrdFormatText_contentStartsLike itk__nrrdFormatText_contentStartsLike
#define _nrrdFormatText_fitsInto itk__nrrdFormatText_fitsInto
#define _nrrdFormatText_nameLooksLike itk__nrrdFormatText_nameLooksLike
#define _nrrdFormatText_read itk__nrrdFormatText_read
#define _nrrdFormatText_write itk__nrrdFormatText_write
#define nrrdFormatText itk_nrrdFormatText
#define _nrrdFormatVTK itk__nrrdFormatVTK
#define _nrrdFormatVTK_available itk__nrrdFormatVTK_available
#define _nrrdFormatVTK_contentStartsLike itk__nrrdFormatVTK_contentStartsLike
#define _nrrdFormatVTK_fitsInto itk__nrrdFormatVTK_fitsInto
#define _nrrdFormatVTK_nameLooksLike itk__nrrdFormatVTK_nameLooksLike
#define _nrrdFormatVTK_read itk__nrrdFormatVTK_read
#define _nrrdFormatVTK_write itk__nrrdFormatVTK_write
#define nrrdFormatVTK itk_nrrdFormatVTK
#endif  /* itk_NrrdIO_mangle_h */
