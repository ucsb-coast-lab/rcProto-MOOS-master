// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: iGPSd_FixData.proto

#ifndef PROTOBUF_iGPSd_5fFixData_2eproto__INCLUDED
#define PROTOBUF_iGPSd_5fFixData_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
// @@protoc_insertion_point(includes)

namespace iGPSdProtobuf {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_iGPSd_5fFixData_2eproto();
void protobuf_AssignDesc_iGPSd_5fFixData_2eproto();
void protobuf_ShutdownFile_iGPSd_5fFixData_2eproto();

class iGPSd_Report;
class iGPSd_Report_GPSFixData;

enum iGPSd_Report_GPSFixData_e_GPS_Fix_Mode {
  iGPSd_Report_GPSFixData_e_GPS_Fix_Mode_FIX_MODE_NOT_SEEN = 0,
  iGPSd_Report_GPSFixData_e_GPS_Fix_Mode_FIX_MODE_NO_FIX = 1,
  iGPSd_Report_GPSFixData_e_GPS_Fix_Mode_FIX_MODE_2D = 2,
  iGPSd_Report_GPSFixData_e_GPS_Fix_Mode_FIX_MODE_3D = 3
};
bool iGPSd_Report_GPSFixData_e_GPS_Fix_Mode_IsValid(int value);
const iGPSd_Report_GPSFixData_e_GPS_Fix_Mode iGPSd_Report_GPSFixData_e_GPS_Fix_Mode_e_GPS_Fix_Mode_MIN = iGPSd_Report_GPSFixData_e_GPS_Fix_Mode_FIX_MODE_NOT_SEEN;
const iGPSd_Report_GPSFixData_e_GPS_Fix_Mode iGPSd_Report_GPSFixData_e_GPS_Fix_Mode_e_GPS_Fix_Mode_MAX = iGPSd_Report_GPSFixData_e_GPS_Fix_Mode_FIX_MODE_3D;
const int iGPSd_Report_GPSFixData_e_GPS_Fix_Mode_e_GPS_Fix_Mode_ARRAYSIZE = iGPSd_Report_GPSFixData_e_GPS_Fix_Mode_e_GPS_Fix_Mode_MAX + 1;

// ===================================================================

class iGPSd_Report_GPSFixData : public ::google::protobuf::MessageLite {
 public:
  iGPSd_Report_GPSFixData();
  virtual ~iGPSd_Report_GPSFixData();
  
  iGPSd_Report_GPSFixData(const iGPSd_Report_GPSFixData& from);
  
  inline iGPSd_Report_GPSFixData& operator=(const iGPSd_Report_GPSFixData& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const iGPSd_Report_GPSFixData& default_instance();
  
  void Swap(iGPSd_Report_GPSFixData* other);
  
  // implements Message ----------------------------------------------
  
  iGPSd_Report_GPSFixData* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const iGPSd_Report_GPSFixData& from);
  void MergeFrom(const iGPSd_Report_GPSFixData& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::std::string GetTypeName() const;
  
  // nested types ----------------------------------------------------
  
  typedef iGPSd_Report_GPSFixData_e_GPS_Fix_Mode e_GPS_Fix_Mode;
  static const e_GPS_Fix_Mode FIX_MODE_NOT_SEEN = iGPSd_Report_GPSFixData_e_GPS_Fix_Mode_FIX_MODE_NOT_SEEN;
  static const e_GPS_Fix_Mode FIX_MODE_NO_FIX = iGPSd_Report_GPSFixData_e_GPS_Fix_Mode_FIX_MODE_NO_FIX;
  static const e_GPS_Fix_Mode FIX_MODE_2D = iGPSd_Report_GPSFixData_e_GPS_Fix_Mode_FIX_MODE_2D;
  static const e_GPS_Fix_Mode FIX_MODE_3D = iGPSd_Report_GPSFixData_e_GPS_Fix_Mode_FIX_MODE_3D;
  static inline bool e_GPS_Fix_Mode_IsValid(int value) {
    return iGPSd_Report_GPSFixData_e_GPS_Fix_Mode_IsValid(value);
  }
  static const e_GPS_Fix_Mode e_GPS_Fix_Mode_MIN =
    iGPSd_Report_GPSFixData_e_GPS_Fix_Mode_e_GPS_Fix_Mode_MIN;
  static const e_GPS_Fix_Mode e_GPS_Fix_Mode_MAX =
    iGPSd_Report_GPSFixData_e_GPS_Fix_Mode_e_GPS_Fix_Mode_MAX;
  static const int e_GPS_Fix_Mode_ARRAYSIZE =
    iGPSd_Report_GPSFixData_e_GPS_Fix_Mode_e_GPS_Fix_Mode_ARRAYSIZE;
  
  // accessors -------------------------------------------------------
  
  // required .iGPSdProtobuf.iGPSd_Report.GPSFixData.e_GPS_Fix_Mode FixMode = 1;
  inline bool has_fixmode() const;
  inline void clear_fixmode();
  static const int kFixModeFieldNumber = 1;
  inline ::iGPSdProtobuf::iGPSd_Report_GPSFixData_e_GPS_Fix_Mode fixmode() const;
  inline void set_fixmode(::iGPSdProtobuf::iGPSd_Report_GPSFixData_e_GPS_Fix_Mode value);
  
  // required int32 NumSatellites = 2;
  inline bool has_numsatellites() const;
  inline void clear_numsatellites();
  static const int kNumSatellitesFieldNumber = 2;
  inline ::google::protobuf::int32 numsatellites() const;
  inline void set_numsatellites(::google::protobuf::int32 value);
  
  // required double UnixTimestamp = 3;
  inline bool has_unixtimestamp() const;
  inline void clear_unixtimestamp();
  static const int kUnixTimestampFieldNumber = 3;
  inline double unixtimestamp() const;
  inline void set_unixtimestamp(double value);
  
  // required double Latitude_deg = 4;
  inline bool has_latitude_deg() const;
  inline void clear_latitude_deg();
  static const int kLatitudeDegFieldNumber = 4;
  inline double latitude_deg() const;
  inline void set_latitude_deg(double value);
  
  // required double Longitude_deg = 5;
  inline bool has_longitude_deg() const;
  inline void clear_longitude_deg();
  static const int kLongitudeDegFieldNumber = 5;
  inline double longitude_deg() const;
  inline void set_longitude_deg(double value);
  
  // required double Heading_deg = 6;
  inline bool has_heading_deg() const;
  inline void clear_heading_deg();
  static const int kHeadingDegFieldNumber = 6;
  inline double heading_deg() const;
  inline void set_heading_deg(double value);
  
  // required double GroundSpeed_mps = 7;
  inline bool has_groundspeed_mps() const;
  inline void clear_groundspeed_mps();
  static const int kGroundSpeedMpsFieldNumber = 7;
  inline double groundspeed_mps() const;
  inline void set_groundspeed_mps(double value);
  
  // required double Altitude_deg = 8;
  inline bool has_altitude_deg() const;
  inline void clear_altitude_deg();
  static const int kAltitudeDegFieldNumber = 8;
  inline double altitude_deg() const;
  inline void set_altitude_deg(double value);
  
  // required double VerticalSpeed_mps = 9;
  inline bool has_verticalspeed_mps() const;
  inline void clear_verticalspeed_mps();
  static const int kVerticalSpeedMpsFieldNumber = 9;
  inline double verticalspeed_mps() const;
  inline void set_verticalspeed_mps(double value);
  
  // required double ePosition = 10;
  inline bool has_eposition() const;
  inline void clear_eposition();
  static const int kEPositionFieldNumber = 10;
  inline double eposition() const;
  inline void set_eposition(double value);
  
  // required double eTime = 11;
  inline bool has_etime() const;
  inline void clear_etime();
  static const int kETimeFieldNumber = 11;
  inline double etime() const;
  inline void set_etime(double value);
  
  // required double eLatitude = 12;
  inline bool has_elatitude() const;
  inline void clear_elatitude();
  static const int kELatitudeFieldNumber = 12;
  inline double elatitude() const;
  inline void set_elatitude(double value);
  
  // required double eLongitude = 13;
  inline bool has_elongitude() const;
  inline void clear_elongitude();
  static const int kELongitudeFieldNumber = 13;
  inline double elongitude() const;
  inline void set_elongitude(double value);
  
  // required double eHeading = 14;
  inline bool has_eheading() const;
  inline void clear_eheading();
  static const int kEHeadingFieldNumber = 14;
  inline double eheading() const;
  inline void set_eheading(double value);
  
  // required double eGroundSpeed = 15;
  inline bool has_egroundspeed() const;
  inline void clear_egroundspeed();
  static const int kEGroundSpeedFieldNumber = 15;
  inline double egroundspeed() const;
  inline void set_egroundspeed(double value);
  
  // required double eAltitude = 16;
  inline bool has_ealtitude() const;
  inline void clear_ealtitude();
  static const int kEAltitudeFieldNumber = 16;
  inline double ealtitude() const;
  inline void set_ealtitude(double value);
  
  // required double eVerticalSpeed = 17;
  inline bool has_everticalspeed() const;
  inline void clear_everticalspeed();
  static const int kEVerticalSpeedFieldNumber = 17;
  inline double everticalspeed() const;
  inline void set_everticalspeed(double value);
  
  // @@protoc_insertion_point(class_scope:iGPSdProtobuf.iGPSd_Report.GPSFixData)
 private:
  inline void set_has_fixmode();
  inline void clear_has_fixmode();
  inline void set_has_numsatellites();
  inline void clear_has_numsatellites();
  inline void set_has_unixtimestamp();
  inline void clear_has_unixtimestamp();
  inline void set_has_latitude_deg();
  inline void clear_has_latitude_deg();
  inline void set_has_longitude_deg();
  inline void clear_has_longitude_deg();
  inline void set_has_heading_deg();
  inline void clear_has_heading_deg();
  inline void set_has_groundspeed_mps();
  inline void clear_has_groundspeed_mps();
  inline void set_has_altitude_deg();
  inline void clear_has_altitude_deg();
  inline void set_has_verticalspeed_mps();
  inline void clear_has_verticalspeed_mps();
  inline void set_has_eposition();
  inline void clear_has_eposition();
  inline void set_has_etime();
  inline void clear_has_etime();
  inline void set_has_elatitude();
  inline void clear_has_elatitude();
  inline void set_has_elongitude();
  inline void clear_has_elongitude();
  inline void set_has_eheading();
  inline void clear_has_eheading();
  inline void set_has_egroundspeed();
  inline void clear_has_egroundspeed();
  inline void set_has_ealtitude();
  inline void clear_has_ealtitude();
  inline void set_has_everticalspeed();
  inline void clear_has_everticalspeed();
  
  int fixmode_;
  ::google::protobuf::int32 numsatellites_;
  double unixtimestamp_;
  double latitude_deg_;
  double longitude_deg_;
  double heading_deg_;
  double groundspeed_mps_;
  double altitude_deg_;
  double verticalspeed_mps_;
  double eposition_;
  double etime_;
  double elatitude_;
  double elongitude_;
  double eheading_;
  double egroundspeed_;
  double ealtitude_;
  double everticalspeed_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(17 + 31) / 32];
  
  friend void  protobuf_AddDesc_iGPSd_5fFixData_2eproto();
  friend void protobuf_AssignDesc_iGPSd_5fFixData_2eproto();
  friend void protobuf_ShutdownFile_iGPSd_5fFixData_2eproto();
  
  void InitAsDefaultInstance();
  static iGPSd_Report_GPSFixData* default_instance_;
};
// -------------------------------------------------------------------

class iGPSd_Report : public ::google::protobuf::MessageLite {
 public:
  iGPSd_Report();
  virtual ~iGPSd_Report();
  
  iGPSd_Report(const iGPSd_Report& from);
  
  inline iGPSd_Report& operator=(const iGPSd_Report& from) {
    CopyFrom(from);
    return *this;
  }
  
  static const iGPSd_Report& default_instance();
  
  void Swap(iGPSd_Report* other);
  
  // implements Message ----------------------------------------------
  
  iGPSd_Report* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const iGPSd_Report& from);
  void MergeFrom(const iGPSd_Report& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::std::string GetTypeName() const;
  
  // nested types ----------------------------------------------------
  
  typedef iGPSd_Report_GPSFixData GPSFixData;
  
  // accessors -------------------------------------------------------
  
  // required bool HaveFix = 1;
  inline bool has_havefix() const;
  inline void clear_havefix();
  static const int kHaveFixFieldNumber = 1;
  inline bool havefix() const;
  inline void set_havefix(bool value);
  
  // optional .iGPSdProtobuf.iGPSd_Report.GPSFixData FixData = 2;
  inline bool has_fixdata() const;
  inline void clear_fixdata();
  static const int kFixDataFieldNumber = 2;
  inline const ::iGPSdProtobuf::iGPSd_Report_GPSFixData& fixdata() const;
  inline ::iGPSdProtobuf::iGPSd_Report_GPSFixData* mutable_fixdata();
  inline ::iGPSdProtobuf::iGPSd_Report_GPSFixData* release_fixdata();
  
  // @@protoc_insertion_point(class_scope:iGPSdProtobuf.iGPSd_Report)
 private:
  inline void set_has_havefix();
  inline void clear_has_havefix();
  inline void set_has_fixdata();
  inline void clear_has_fixdata();
  
  ::iGPSdProtobuf::iGPSd_Report_GPSFixData* fixdata_;
  bool havefix_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  friend void  protobuf_AddDesc_iGPSd_5fFixData_2eproto();
  friend void protobuf_AssignDesc_iGPSd_5fFixData_2eproto();
  friend void protobuf_ShutdownFile_iGPSd_5fFixData_2eproto();
  
  void InitAsDefaultInstance();
  static iGPSd_Report* default_instance_;
};
// ===================================================================


// ===================================================================

// iGPSd_Report_GPSFixData

// required .iGPSdProtobuf.iGPSd_Report.GPSFixData.e_GPS_Fix_Mode FixMode = 1;
inline bool iGPSd_Report_GPSFixData::has_fixmode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void iGPSd_Report_GPSFixData::set_has_fixmode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void iGPSd_Report_GPSFixData::clear_has_fixmode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void iGPSd_Report_GPSFixData::clear_fixmode() {
  fixmode_ = 0;
  clear_has_fixmode();
}
inline ::iGPSdProtobuf::iGPSd_Report_GPSFixData_e_GPS_Fix_Mode iGPSd_Report_GPSFixData::fixmode() const {
  return static_cast< ::iGPSdProtobuf::iGPSd_Report_GPSFixData_e_GPS_Fix_Mode >(fixmode_);
}
inline void iGPSd_Report_GPSFixData::set_fixmode(::iGPSdProtobuf::iGPSd_Report_GPSFixData_e_GPS_Fix_Mode value) {
  GOOGLE_DCHECK(::iGPSdProtobuf::iGPSd_Report_GPSFixData_e_GPS_Fix_Mode_IsValid(value));
  set_has_fixmode();
  fixmode_ = value;
}

// required int32 NumSatellites = 2;
inline bool iGPSd_Report_GPSFixData::has_numsatellites() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void iGPSd_Report_GPSFixData::set_has_numsatellites() {
  _has_bits_[0] |= 0x00000002u;
}
inline void iGPSd_Report_GPSFixData::clear_has_numsatellites() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void iGPSd_Report_GPSFixData::clear_numsatellites() {
  numsatellites_ = 0;
  clear_has_numsatellites();
}
inline ::google::protobuf::int32 iGPSd_Report_GPSFixData::numsatellites() const {
  return numsatellites_;
}
inline void iGPSd_Report_GPSFixData::set_numsatellites(::google::protobuf::int32 value) {
  set_has_numsatellites();
  numsatellites_ = value;
}

// required double UnixTimestamp = 3;
inline bool iGPSd_Report_GPSFixData::has_unixtimestamp() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void iGPSd_Report_GPSFixData::set_has_unixtimestamp() {
  _has_bits_[0] |= 0x00000004u;
}
inline void iGPSd_Report_GPSFixData::clear_has_unixtimestamp() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void iGPSd_Report_GPSFixData::clear_unixtimestamp() {
  unixtimestamp_ = 0;
  clear_has_unixtimestamp();
}
inline double iGPSd_Report_GPSFixData::unixtimestamp() const {
  return unixtimestamp_;
}
inline void iGPSd_Report_GPSFixData::set_unixtimestamp(double value) {
  set_has_unixtimestamp();
  unixtimestamp_ = value;
}

// required double Latitude_deg = 4;
inline bool iGPSd_Report_GPSFixData::has_latitude_deg() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void iGPSd_Report_GPSFixData::set_has_latitude_deg() {
  _has_bits_[0] |= 0x00000008u;
}
inline void iGPSd_Report_GPSFixData::clear_has_latitude_deg() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void iGPSd_Report_GPSFixData::clear_latitude_deg() {
  latitude_deg_ = 0;
  clear_has_latitude_deg();
}
inline double iGPSd_Report_GPSFixData::latitude_deg() const {
  return latitude_deg_;
}
inline void iGPSd_Report_GPSFixData::set_latitude_deg(double value) {
  set_has_latitude_deg();
  latitude_deg_ = value;
}

// required double Longitude_deg = 5;
inline bool iGPSd_Report_GPSFixData::has_longitude_deg() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void iGPSd_Report_GPSFixData::set_has_longitude_deg() {
  _has_bits_[0] |= 0x00000010u;
}
inline void iGPSd_Report_GPSFixData::clear_has_longitude_deg() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void iGPSd_Report_GPSFixData::clear_longitude_deg() {
  longitude_deg_ = 0;
  clear_has_longitude_deg();
}
inline double iGPSd_Report_GPSFixData::longitude_deg() const {
  return longitude_deg_;
}
inline void iGPSd_Report_GPSFixData::set_longitude_deg(double value) {
  set_has_longitude_deg();
  longitude_deg_ = value;
}

// required double Heading_deg = 6;
inline bool iGPSd_Report_GPSFixData::has_heading_deg() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void iGPSd_Report_GPSFixData::set_has_heading_deg() {
  _has_bits_[0] |= 0x00000020u;
}
inline void iGPSd_Report_GPSFixData::clear_has_heading_deg() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void iGPSd_Report_GPSFixData::clear_heading_deg() {
  heading_deg_ = 0;
  clear_has_heading_deg();
}
inline double iGPSd_Report_GPSFixData::heading_deg() const {
  return heading_deg_;
}
inline void iGPSd_Report_GPSFixData::set_heading_deg(double value) {
  set_has_heading_deg();
  heading_deg_ = value;
}

// required double GroundSpeed_mps = 7;
inline bool iGPSd_Report_GPSFixData::has_groundspeed_mps() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void iGPSd_Report_GPSFixData::set_has_groundspeed_mps() {
  _has_bits_[0] |= 0x00000040u;
}
inline void iGPSd_Report_GPSFixData::clear_has_groundspeed_mps() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void iGPSd_Report_GPSFixData::clear_groundspeed_mps() {
  groundspeed_mps_ = 0;
  clear_has_groundspeed_mps();
}
inline double iGPSd_Report_GPSFixData::groundspeed_mps() const {
  return groundspeed_mps_;
}
inline void iGPSd_Report_GPSFixData::set_groundspeed_mps(double value) {
  set_has_groundspeed_mps();
  groundspeed_mps_ = value;
}

// required double Altitude_deg = 8;
inline bool iGPSd_Report_GPSFixData::has_altitude_deg() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void iGPSd_Report_GPSFixData::set_has_altitude_deg() {
  _has_bits_[0] |= 0x00000080u;
}
inline void iGPSd_Report_GPSFixData::clear_has_altitude_deg() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void iGPSd_Report_GPSFixData::clear_altitude_deg() {
  altitude_deg_ = 0;
  clear_has_altitude_deg();
}
inline double iGPSd_Report_GPSFixData::altitude_deg() const {
  return altitude_deg_;
}
inline void iGPSd_Report_GPSFixData::set_altitude_deg(double value) {
  set_has_altitude_deg();
  altitude_deg_ = value;
}

// required double VerticalSpeed_mps = 9;
inline bool iGPSd_Report_GPSFixData::has_verticalspeed_mps() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void iGPSd_Report_GPSFixData::set_has_verticalspeed_mps() {
  _has_bits_[0] |= 0x00000100u;
}
inline void iGPSd_Report_GPSFixData::clear_has_verticalspeed_mps() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void iGPSd_Report_GPSFixData::clear_verticalspeed_mps() {
  verticalspeed_mps_ = 0;
  clear_has_verticalspeed_mps();
}
inline double iGPSd_Report_GPSFixData::verticalspeed_mps() const {
  return verticalspeed_mps_;
}
inline void iGPSd_Report_GPSFixData::set_verticalspeed_mps(double value) {
  set_has_verticalspeed_mps();
  verticalspeed_mps_ = value;
}

// required double ePosition = 10;
inline bool iGPSd_Report_GPSFixData::has_eposition() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void iGPSd_Report_GPSFixData::set_has_eposition() {
  _has_bits_[0] |= 0x00000200u;
}
inline void iGPSd_Report_GPSFixData::clear_has_eposition() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void iGPSd_Report_GPSFixData::clear_eposition() {
  eposition_ = 0;
  clear_has_eposition();
}
inline double iGPSd_Report_GPSFixData::eposition() const {
  return eposition_;
}
inline void iGPSd_Report_GPSFixData::set_eposition(double value) {
  set_has_eposition();
  eposition_ = value;
}

// required double eTime = 11;
inline bool iGPSd_Report_GPSFixData::has_etime() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void iGPSd_Report_GPSFixData::set_has_etime() {
  _has_bits_[0] |= 0x00000400u;
}
inline void iGPSd_Report_GPSFixData::clear_has_etime() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void iGPSd_Report_GPSFixData::clear_etime() {
  etime_ = 0;
  clear_has_etime();
}
inline double iGPSd_Report_GPSFixData::etime() const {
  return etime_;
}
inline void iGPSd_Report_GPSFixData::set_etime(double value) {
  set_has_etime();
  etime_ = value;
}

// required double eLatitude = 12;
inline bool iGPSd_Report_GPSFixData::has_elatitude() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void iGPSd_Report_GPSFixData::set_has_elatitude() {
  _has_bits_[0] |= 0x00000800u;
}
inline void iGPSd_Report_GPSFixData::clear_has_elatitude() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void iGPSd_Report_GPSFixData::clear_elatitude() {
  elatitude_ = 0;
  clear_has_elatitude();
}
inline double iGPSd_Report_GPSFixData::elatitude() const {
  return elatitude_;
}
inline void iGPSd_Report_GPSFixData::set_elatitude(double value) {
  set_has_elatitude();
  elatitude_ = value;
}

// required double eLongitude = 13;
inline bool iGPSd_Report_GPSFixData::has_elongitude() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void iGPSd_Report_GPSFixData::set_has_elongitude() {
  _has_bits_[0] |= 0x00001000u;
}
inline void iGPSd_Report_GPSFixData::clear_has_elongitude() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void iGPSd_Report_GPSFixData::clear_elongitude() {
  elongitude_ = 0;
  clear_has_elongitude();
}
inline double iGPSd_Report_GPSFixData::elongitude() const {
  return elongitude_;
}
inline void iGPSd_Report_GPSFixData::set_elongitude(double value) {
  set_has_elongitude();
  elongitude_ = value;
}

// required double eHeading = 14;
inline bool iGPSd_Report_GPSFixData::has_eheading() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void iGPSd_Report_GPSFixData::set_has_eheading() {
  _has_bits_[0] |= 0x00002000u;
}
inline void iGPSd_Report_GPSFixData::clear_has_eheading() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void iGPSd_Report_GPSFixData::clear_eheading() {
  eheading_ = 0;
  clear_has_eheading();
}
inline double iGPSd_Report_GPSFixData::eheading() const {
  return eheading_;
}
inline void iGPSd_Report_GPSFixData::set_eheading(double value) {
  set_has_eheading();
  eheading_ = value;
}

// required double eGroundSpeed = 15;
inline bool iGPSd_Report_GPSFixData::has_egroundspeed() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void iGPSd_Report_GPSFixData::set_has_egroundspeed() {
  _has_bits_[0] |= 0x00004000u;
}
inline void iGPSd_Report_GPSFixData::clear_has_egroundspeed() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void iGPSd_Report_GPSFixData::clear_egroundspeed() {
  egroundspeed_ = 0;
  clear_has_egroundspeed();
}
inline double iGPSd_Report_GPSFixData::egroundspeed() const {
  return egroundspeed_;
}
inline void iGPSd_Report_GPSFixData::set_egroundspeed(double value) {
  set_has_egroundspeed();
  egroundspeed_ = value;
}

// required double eAltitude = 16;
inline bool iGPSd_Report_GPSFixData::has_ealtitude() const {
  return (_has_bits_[0] & 0x00008000u) != 0;
}
inline void iGPSd_Report_GPSFixData::set_has_ealtitude() {
  _has_bits_[0] |= 0x00008000u;
}
inline void iGPSd_Report_GPSFixData::clear_has_ealtitude() {
  _has_bits_[0] &= ~0x00008000u;
}
inline void iGPSd_Report_GPSFixData::clear_ealtitude() {
  ealtitude_ = 0;
  clear_has_ealtitude();
}
inline double iGPSd_Report_GPSFixData::ealtitude() const {
  return ealtitude_;
}
inline void iGPSd_Report_GPSFixData::set_ealtitude(double value) {
  set_has_ealtitude();
  ealtitude_ = value;
}

// required double eVerticalSpeed = 17;
inline bool iGPSd_Report_GPSFixData::has_everticalspeed() const {
  return (_has_bits_[0] & 0x00010000u) != 0;
}
inline void iGPSd_Report_GPSFixData::set_has_everticalspeed() {
  _has_bits_[0] |= 0x00010000u;
}
inline void iGPSd_Report_GPSFixData::clear_has_everticalspeed() {
  _has_bits_[0] &= ~0x00010000u;
}
inline void iGPSd_Report_GPSFixData::clear_everticalspeed() {
  everticalspeed_ = 0;
  clear_has_everticalspeed();
}
inline double iGPSd_Report_GPSFixData::everticalspeed() const {
  return everticalspeed_;
}
inline void iGPSd_Report_GPSFixData::set_everticalspeed(double value) {
  set_has_everticalspeed();
  everticalspeed_ = value;
}

// -------------------------------------------------------------------

// iGPSd_Report

// required bool HaveFix = 1;
inline bool iGPSd_Report::has_havefix() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void iGPSd_Report::set_has_havefix() {
  _has_bits_[0] |= 0x00000001u;
}
inline void iGPSd_Report::clear_has_havefix() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void iGPSd_Report::clear_havefix() {
  havefix_ = false;
  clear_has_havefix();
}
inline bool iGPSd_Report::havefix() const {
  return havefix_;
}
inline void iGPSd_Report::set_havefix(bool value) {
  set_has_havefix();
  havefix_ = value;
}

// optional .iGPSdProtobuf.iGPSd_Report.GPSFixData FixData = 2;
inline bool iGPSd_Report::has_fixdata() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void iGPSd_Report::set_has_fixdata() {
  _has_bits_[0] |= 0x00000002u;
}
inline void iGPSd_Report::clear_has_fixdata() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void iGPSd_Report::clear_fixdata() {
  if (fixdata_ != NULL) fixdata_->::iGPSdProtobuf::iGPSd_Report_GPSFixData::Clear();
  clear_has_fixdata();
}
inline const ::iGPSdProtobuf::iGPSd_Report_GPSFixData& iGPSd_Report::fixdata() const {
  return fixdata_ != NULL ? *fixdata_ : *default_instance_->fixdata_;
}
inline ::iGPSdProtobuf::iGPSd_Report_GPSFixData* iGPSd_Report::mutable_fixdata() {
  set_has_fixdata();
  if (fixdata_ == NULL) fixdata_ = new ::iGPSdProtobuf::iGPSd_Report_GPSFixData;
  return fixdata_;
}
inline ::iGPSdProtobuf::iGPSd_Report_GPSFixData* iGPSd_Report::release_fixdata() {
  clear_has_fixdata();
  ::iGPSdProtobuf::iGPSd_Report_GPSFixData* temp = fixdata_;
  fixdata_ = NULL;
  return temp;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace iGPSdProtobuf

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_iGPSd_5fFixData_2eproto__INCLUDED
