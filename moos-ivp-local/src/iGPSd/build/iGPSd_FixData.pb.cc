// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "iGPSd_FixData.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace iGPSdProtobuf {

void protobuf_ShutdownFile_iGPSd_5fFixData_2eproto() {
  delete iGPSd_Report::default_instance_;
  delete iGPSd_Report_GPSFixData::default_instance_;
}

void protobuf_AddDesc_iGPSd_5fFixData_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  iGPSd_Report::default_instance_ = new iGPSd_Report();
  iGPSd_Report_GPSFixData::default_instance_ = new iGPSd_Report_GPSFixData();
  iGPSd_Report::default_instance_->InitAsDefaultInstance();
  iGPSd_Report_GPSFixData::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_iGPSd_5fFixData_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_iGPSd_5fFixData_2eproto {
  StaticDescriptorInitializer_iGPSd_5fFixData_2eproto() {
    protobuf_AddDesc_iGPSd_5fFixData_2eproto();
  }
} static_descriptor_initializer_iGPSd_5fFixData_2eproto_;


// ===================================================================

bool iGPSd_Report_GPSFixData_e_GPS_Fix_Mode_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const iGPSd_Report_GPSFixData_e_GPS_Fix_Mode iGPSd_Report_GPSFixData::FIX_MODE_NOT_SEEN;
const iGPSd_Report_GPSFixData_e_GPS_Fix_Mode iGPSd_Report_GPSFixData::FIX_MODE_NO_FIX;
const iGPSd_Report_GPSFixData_e_GPS_Fix_Mode iGPSd_Report_GPSFixData::FIX_MODE_2D;
const iGPSd_Report_GPSFixData_e_GPS_Fix_Mode iGPSd_Report_GPSFixData::FIX_MODE_3D;
const iGPSd_Report_GPSFixData_e_GPS_Fix_Mode iGPSd_Report_GPSFixData::e_GPS_Fix_Mode_MIN;
const iGPSd_Report_GPSFixData_e_GPS_Fix_Mode iGPSd_Report_GPSFixData::e_GPS_Fix_Mode_MAX;
const int iGPSd_Report_GPSFixData::e_GPS_Fix_Mode_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int iGPSd_Report_GPSFixData::kFixModeFieldNumber;
const int iGPSd_Report_GPSFixData::kNumSatellitesFieldNumber;
const int iGPSd_Report_GPSFixData::kUnixTimestampFieldNumber;
const int iGPSd_Report_GPSFixData::kLatitudeDegFieldNumber;
const int iGPSd_Report_GPSFixData::kLongitudeDegFieldNumber;
const int iGPSd_Report_GPSFixData::kHeadingDegFieldNumber;
const int iGPSd_Report_GPSFixData::kGroundSpeedMpsFieldNumber;
const int iGPSd_Report_GPSFixData::kAltitudeDegFieldNumber;
const int iGPSd_Report_GPSFixData::kVerticalSpeedMpsFieldNumber;
const int iGPSd_Report_GPSFixData::kEPositionFieldNumber;
const int iGPSd_Report_GPSFixData::kETimeFieldNumber;
const int iGPSd_Report_GPSFixData::kELatitudeFieldNumber;
const int iGPSd_Report_GPSFixData::kELongitudeFieldNumber;
const int iGPSd_Report_GPSFixData::kEHeadingFieldNumber;
const int iGPSd_Report_GPSFixData::kEGroundSpeedFieldNumber;
const int iGPSd_Report_GPSFixData::kEAltitudeFieldNumber;
const int iGPSd_Report_GPSFixData::kEVerticalSpeedFieldNumber;
#endif  // !_MSC_VER

iGPSd_Report_GPSFixData::iGPSd_Report_GPSFixData()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void iGPSd_Report_GPSFixData::InitAsDefaultInstance() {
}

iGPSd_Report_GPSFixData::iGPSd_Report_GPSFixData(const iGPSd_Report_GPSFixData& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void iGPSd_Report_GPSFixData::SharedCtor() {
  _cached_size_ = 0;
  fixmode_ = 0;
  numsatellites_ = 0;
  unixtimestamp_ = 0;
  latitude_deg_ = 0;
  longitude_deg_ = 0;
  heading_deg_ = 0;
  groundspeed_mps_ = 0;
  altitude_deg_ = 0;
  verticalspeed_mps_ = 0;
  eposition_ = 0;
  etime_ = 0;
  elatitude_ = 0;
  elongitude_ = 0;
  eheading_ = 0;
  egroundspeed_ = 0;
  ealtitude_ = 0;
  everticalspeed_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

iGPSd_Report_GPSFixData::~iGPSd_Report_GPSFixData() {
  SharedDtor();
}

void iGPSd_Report_GPSFixData::SharedDtor() {
  if (this != default_instance_) {
  }
}

void iGPSd_Report_GPSFixData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const iGPSd_Report_GPSFixData& iGPSd_Report_GPSFixData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_iGPSd_5fFixData_2eproto();  return *default_instance_;
}

iGPSd_Report_GPSFixData* iGPSd_Report_GPSFixData::default_instance_ = NULL;

iGPSd_Report_GPSFixData* iGPSd_Report_GPSFixData::New() const {
  return new iGPSd_Report_GPSFixData;
}

void iGPSd_Report_GPSFixData::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    fixmode_ = 0;
    numsatellites_ = 0;
    unixtimestamp_ = 0;
    latitude_deg_ = 0;
    longitude_deg_ = 0;
    heading_deg_ = 0;
    groundspeed_mps_ = 0;
    altitude_deg_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    verticalspeed_mps_ = 0;
    eposition_ = 0;
    etime_ = 0;
    elatitude_ = 0;
    elongitude_ = 0;
    eheading_ = 0;
    egroundspeed_ = 0;
    ealtitude_ = 0;
  }
  if (_has_bits_[16 / 32] & (0xffu << (16 % 32))) {
    everticalspeed_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool iGPSd_Report_GPSFixData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .iGPSdProtobuf.iGPSd_Report.GPSFixData.e_GPS_Fix_Mode FixMode = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::iGPSdProtobuf::iGPSd_Report_GPSFixData_e_GPS_Fix_Mode_IsValid(value)) {
            set_fixmode(static_cast< ::iGPSdProtobuf::iGPSd_Report_GPSFixData_e_GPS_Fix_Mode >(value));
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_NumSatellites;
        break;
      }
      
      // required int32 NumSatellites = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_NumSatellites:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &numsatellites_)));
          set_has_numsatellites();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(25)) goto parse_UnixTimestamp;
        break;
      }
      
      // required double UnixTimestamp = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_UnixTimestamp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &unixtimestamp_)));
          set_has_unixtimestamp();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(33)) goto parse_Latitude_deg;
        break;
      }
      
      // required double Latitude_deg = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_Latitude_deg:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &latitude_deg_)));
          set_has_latitude_deg();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(41)) goto parse_Longitude_deg;
        break;
      }
      
      // required double Longitude_deg = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_Longitude_deg:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &longitude_deg_)));
          set_has_longitude_deg();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(49)) goto parse_Heading_deg;
        break;
      }
      
      // required double Heading_deg = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_Heading_deg:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &heading_deg_)));
          set_has_heading_deg();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(57)) goto parse_GroundSpeed_mps;
        break;
      }
      
      // required double GroundSpeed_mps = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_GroundSpeed_mps:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &groundspeed_mps_)));
          set_has_groundspeed_mps();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(65)) goto parse_Altitude_deg;
        break;
      }
      
      // required double Altitude_deg = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_Altitude_deg:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &altitude_deg_)));
          set_has_altitude_deg();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(73)) goto parse_VerticalSpeed_mps;
        break;
      }
      
      // required double VerticalSpeed_mps = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_VerticalSpeed_mps:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &verticalspeed_mps_)));
          set_has_verticalspeed_mps();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(81)) goto parse_ePosition;
        break;
      }
      
      // required double ePosition = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_ePosition:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &eposition_)));
          set_has_eposition();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(89)) goto parse_eTime;
        break;
      }
      
      // required double eTime = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_eTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &etime_)));
          set_has_etime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(97)) goto parse_eLatitude;
        break;
      }
      
      // required double eLatitude = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_eLatitude:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &elatitude_)));
          set_has_elatitude();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(105)) goto parse_eLongitude;
        break;
      }
      
      // required double eLongitude = 13;
      case 13: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_eLongitude:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &elongitude_)));
          set_has_elongitude();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(113)) goto parse_eHeading;
        break;
      }
      
      // required double eHeading = 14;
      case 14: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_eHeading:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &eheading_)));
          set_has_eheading();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(121)) goto parse_eGroundSpeed;
        break;
      }
      
      // required double eGroundSpeed = 15;
      case 15: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_eGroundSpeed:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &egroundspeed_)));
          set_has_egroundspeed();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(129)) goto parse_eAltitude;
        break;
      }
      
      // required double eAltitude = 16;
      case 16: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_eAltitude:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &ealtitude_)));
          set_has_ealtitude();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(137)) goto parse_eVerticalSpeed;
        break;
      }
      
      // required double eVerticalSpeed = 17;
      case 17: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_eVerticalSpeed:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &everticalspeed_)));
          set_has_everticalspeed();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void iGPSd_Report_GPSFixData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .iGPSdProtobuf.iGPSd_Report.GPSFixData.e_GPS_Fix_Mode FixMode = 1;
  if (has_fixmode()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->fixmode(), output);
  }
  
  // required int32 NumSatellites = 2;
  if (has_numsatellites()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->numsatellites(), output);
  }
  
  // required double UnixTimestamp = 3;
  if (has_unixtimestamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->unixtimestamp(), output);
  }
  
  // required double Latitude_deg = 4;
  if (has_latitude_deg()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->latitude_deg(), output);
  }
  
  // required double Longitude_deg = 5;
  if (has_longitude_deg()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->longitude_deg(), output);
  }
  
  // required double Heading_deg = 6;
  if (has_heading_deg()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->heading_deg(), output);
  }
  
  // required double GroundSpeed_mps = 7;
  if (has_groundspeed_mps()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->groundspeed_mps(), output);
  }
  
  // required double Altitude_deg = 8;
  if (has_altitude_deg()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(8, this->altitude_deg(), output);
  }
  
  // required double VerticalSpeed_mps = 9;
  if (has_verticalspeed_mps()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(9, this->verticalspeed_mps(), output);
  }
  
  // required double ePosition = 10;
  if (has_eposition()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(10, this->eposition(), output);
  }
  
  // required double eTime = 11;
  if (has_etime()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(11, this->etime(), output);
  }
  
  // required double eLatitude = 12;
  if (has_elatitude()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(12, this->elatitude(), output);
  }
  
  // required double eLongitude = 13;
  if (has_elongitude()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(13, this->elongitude(), output);
  }
  
  // required double eHeading = 14;
  if (has_eheading()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(14, this->eheading(), output);
  }
  
  // required double eGroundSpeed = 15;
  if (has_egroundspeed()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(15, this->egroundspeed(), output);
  }
  
  // required double eAltitude = 16;
  if (has_ealtitude()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(16, this->ealtitude(), output);
  }
  
  // required double eVerticalSpeed = 17;
  if (has_everticalspeed()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(17, this->everticalspeed(), output);
  }
  
}

int iGPSd_Report_GPSFixData::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .iGPSdProtobuf.iGPSd_Report.GPSFixData.e_GPS_Fix_Mode FixMode = 1;
    if (has_fixmode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->fixmode());
    }
    
    // required int32 NumSatellites = 2;
    if (has_numsatellites()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->numsatellites());
    }
    
    // required double UnixTimestamp = 3;
    if (has_unixtimestamp()) {
      total_size += 1 + 8;
    }
    
    // required double Latitude_deg = 4;
    if (has_latitude_deg()) {
      total_size += 1 + 8;
    }
    
    // required double Longitude_deg = 5;
    if (has_longitude_deg()) {
      total_size += 1 + 8;
    }
    
    // required double Heading_deg = 6;
    if (has_heading_deg()) {
      total_size += 1 + 8;
    }
    
    // required double GroundSpeed_mps = 7;
    if (has_groundspeed_mps()) {
      total_size += 1 + 8;
    }
    
    // required double Altitude_deg = 8;
    if (has_altitude_deg()) {
      total_size += 1 + 8;
    }
    
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // required double VerticalSpeed_mps = 9;
    if (has_verticalspeed_mps()) {
      total_size += 1 + 8;
    }
    
    // required double ePosition = 10;
    if (has_eposition()) {
      total_size += 1 + 8;
    }
    
    // required double eTime = 11;
    if (has_etime()) {
      total_size += 1 + 8;
    }
    
    // required double eLatitude = 12;
    if (has_elatitude()) {
      total_size += 1 + 8;
    }
    
    // required double eLongitude = 13;
    if (has_elongitude()) {
      total_size += 1 + 8;
    }
    
    // required double eHeading = 14;
    if (has_eheading()) {
      total_size += 1 + 8;
    }
    
    // required double eGroundSpeed = 15;
    if (has_egroundspeed()) {
      total_size += 1 + 8;
    }
    
    // required double eAltitude = 16;
    if (has_ealtitude()) {
      total_size += 2 + 8;
    }
    
  }
  if (_has_bits_[16 / 32] & (0xffu << (16 % 32))) {
    // required double eVerticalSpeed = 17;
    if (has_everticalspeed()) {
      total_size += 2 + 8;
    }
    
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void iGPSd_Report_GPSFixData::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const iGPSd_Report_GPSFixData*>(&from));
}

void iGPSd_Report_GPSFixData::MergeFrom(const iGPSd_Report_GPSFixData& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_fixmode()) {
      set_fixmode(from.fixmode());
    }
    if (from.has_numsatellites()) {
      set_numsatellites(from.numsatellites());
    }
    if (from.has_unixtimestamp()) {
      set_unixtimestamp(from.unixtimestamp());
    }
    if (from.has_latitude_deg()) {
      set_latitude_deg(from.latitude_deg());
    }
    if (from.has_longitude_deg()) {
      set_longitude_deg(from.longitude_deg());
    }
    if (from.has_heading_deg()) {
      set_heading_deg(from.heading_deg());
    }
    if (from.has_groundspeed_mps()) {
      set_groundspeed_mps(from.groundspeed_mps());
    }
    if (from.has_altitude_deg()) {
      set_altitude_deg(from.altitude_deg());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_verticalspeed_mps()) {
      set_verticalspeed_mps(from.verticalspeed_mps());
    }
    if (from.has_eposition()) {
      set_eposition(from.eposition());
    }
    if (from.has_etime()) {
      set_etime(from.etime());
    }
    if (from.has_elatitude()) {
      set_elatitude(from.elatitude());
    }
    if (from.has_elongitude()) {
      set_elongitude(from.elongitude());
    }
    if (from.has_eheading()) {
      set_eheading(from.eheading());
    }
    if (from.has_egroundspeed()) {
      set_egroundspeed(from.egroundspeed());
    }
    if (from.has_ealtitude()) {
      set_ealtitude(from.ealtitude());
    }
  }
  if (from._has_bits_[16 / 32] & (0xffu << (16 % 32))) {
    if (from.has_everticalspeed()) {
      set_everticalspeed(from.everticalspeed());
    }
  }
}

void iGPSd_Report_GPSFixData::CopyFrom(const iGPSd_Report_GPSFixData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool iGPSd_Report_GPSFixData::IsInitialized() const {
  if ((_has_bits_[0] & 0x0001ffff) != 0x0001ffff) return false;
  
  return true;
}

void iGPSd_Report_GPSFixData::Swap(iGPSd_Report_GPSFixData* other) {
  if (other != this) {
    std::swap(fixmode_, other->fixmode_);
    std::swap(numsatellites_, other->numsatellites_);
    std::swap(unixtimestamp_, other->unixtimestamp_);
    std::swap(latitude_deg_, other->latitude_deg_);
    std::swap(longitude_deg_, other->longitude_deg_);
    std::swap(heading_deg_, other->heading_deg_);
    std::swap(groundspeed_mps_, other->groundspeed_mps_);
    std::swap(altitude_deg_, other->altitude_deg_);
    std::swap(verticalspeed_mps_, other->verticalspeed_mps_);
    std::swap(eposition_, other->eposition_);
    std::swap(etime_, other->etime_);
    std::swap(elatitude_, other->elatitude_);
    std::swap(elongitude_, other->elongitude_);
    std::swap(eheading_, other->eheading_);
    std::swap(egroundspeed_, other->egroundspeed_);
    std::swap(ealtitude_, other->ealtitude_);
    std::swap(everticalspeed_, other->everticalspeed_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string iGPSd_Report_GPSFixData::GetTypeName() const {
  return "iGPSdProtobuf.iGPSd_Report.GPSFixData";
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int iGPSd_Report::kHaveFixFieldNumber;
const int iGPSd_Report::kFixDataFieldNumber;
#endif  // !_MSC_VER

iGPSd_Report::iGPSd_Report()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void iGPSd_Report::InitAsDefaultInstance() {
  fixdata_ = const_cast< ::iGPSdProtobuf::iGPSd_Report_GPSFixData*>(&::iGPSdProtobuf::iGPSd_Report_GPSFixData::default_instance());
}

iGPSd_Report::iGPSd_Report(const iGPSd_Report& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void iGPSd_Report::SharedCtor() {
  _cached_size_ = 0;
  havefix_ = false;
  fixdata_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

iGPSd_Report::~iGPSd_Report() {
  SharedDtor();
}

void iGPSd_Report::SharedDtor() {
  if (this != default_instance_) {
    delete fixdata_;
  }
}

void iGPSd_Report::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const iGPSd_Report& iGPSd_Report::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_iGPSd_5fFixData_2eproto();  return *default_instance_;
}

iGPSd_Report* iGPSd_Report::default_instance_ = NULL;

iGPSd_Report* iGPSd_Report::New() const {
  return new iGPSd_Report;
}

void iGPSd_Report::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    havefix_ = false;
    if (has_fixdata()) {
      if (fixdata_ != NULL) fixdata_->::iGPSdProtobuf::iGPSd_Report_GPSFixData::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool iGPSd_Report::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bool HaveFix = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &havefix_)));
          set_has_havefix();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_FixData;
        break;
      }
      
      // optional .iGPSdProtobuf.iGPSd_Report.GPSFixData FixData = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_FixData:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_fixdata()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void iGPSd_Report::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required bool HaveFix = 1;
  if (has_havefix()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->havefix(), output);
  }
  
  // optional .iGPSdProtobuf.iGPSd_Report.GPSFixData FixData = 2;
  if (has_fixdata()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->fixdata(), output);
  }
  
}

int iGPSd_Report::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required bool HaveFix = 1;
    if (has_havefix()) {
      total_size += 1 + 1;
    }
    
    // optional .iGPSdProtobuf.iGPSd_Report.GPSFixData FixData = 2;
    if (has_fixdata()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->fixdata());
    }
    
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void iGPSd_Report::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const iGPSd_Report*>(&from));
}

void iGPSd_Report::MergeFrom(const iGPSd_Report& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_havefix()) {
      set_havefix(from.havefix());
    }
    if (from.has_fixdata()) {
      mutable_fixdata()->::iGPSdProtobuf::iGPSd_Report_GPSFixData::MergeFrom(from.fixdata());
    }
  }
}

void iGPSd_Report::CopyFrom(const iGPSd_Report& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool iGPSd_Report::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  if (has_fixdata()) {
    if (!this->fixdata().IsInitialized()) return false;
  }
  return true;
}

void iGPSd_Report::Swap(iGPSd_Report* other) {
  if (other != this) {
    std::swap(havefix_, other->havefix_);
    std::swap(fixdata_, other->fixdata_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string iGPSd_Report::GetTypeName() const {
  return "iGPSdProtobuf.iGPSd_Report";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace iGPSdProtobuf

// @@protoc_insertion_point(global_scope)
