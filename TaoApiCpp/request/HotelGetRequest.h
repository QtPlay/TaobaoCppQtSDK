#ifndef HOTELGETREQUEST_H
#define HOTELGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelGetResponse.h>

/**
 * TOP API: 此接口用于查询一个酒店，根据传入的酒店hid查询酒店信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 bool getCheckAudit() const
;  void setCheckAudit (bool checkAudit);

 qlonglong getHid() const
;  void setHid (qlonglong hid);

 bool getNeedRoomType() const
;  void setNeedRoomType (bool needRoomType);


  virtual HotelGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief true表示查询酒店审核状态，false表示查询已审核通过酒店详细信息
 **/
  bool checkAudit;

/**
 * @brief 要查询的酒店id。必须为数字
 **/
  qlonglong hid;

/**
 * @brief 是否需要返回该酒店的房型列表。可选值：true，false。
 **/
  bool needRoomType;

};

#endif  /* HOTELGETREQUEST_H */
