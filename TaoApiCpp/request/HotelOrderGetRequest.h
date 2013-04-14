#ifndef HOTELORDERGETREQUEST_H
#define HOTELORDERGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelOrderGetResponse.h>

/**
 * TOP API: 此接口用于查询一个酒店订单，根据传入的订单号查询订单信息。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelOrderGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 bool getNeedGuest() const
;  void setNeedGuest (bool needGuest);

 bool getNeedMessage() const
;  void setNeedMessage (bool needMessage);

 qlonglong getOid() const
;  void setOid (qlonglong oid);

 qlonglong getTid() const
;  void setTid (qlonglong tid);


  virtual HotelOrderGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 是否需要返回该订单的入住人列表。可选值：true，false。
 **/
  bool needGuest;

/**
 * @brief 是否显示买家留言，可选值true、false
 **/
  bool needMessage;

/**
 * @brief 酒店订单oid，必须为数字。oid，tid必须传一项，同时传递的情况下，作为查询条件的优先级由高到低依次为oid，tid。
 **/
  qlonglong oid;

/**
 * @brief 淘宝订单tid，必须为数字。oid，tid必须传一项，同时传递的情况下，作为查询条件的优先级由高到低依次为oid，tid。
 **/
  qlonglong tid;

};

#endif  /* HOTELORDERGETREQUEST_H */
