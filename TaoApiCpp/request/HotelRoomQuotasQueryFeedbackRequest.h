#ifndef HOTELROOMQUOTASQUERYFEEDBACKREQUEST_H
#define HOTELROOMQUOTASQUERYFEEDBACKREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelRoomQuotasQueryFeedbackResponse.h>

/**
 * TOP API: 接入方房态查询结果返回
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelRoomQuotasQueryFeedbackRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAvaliableRoomCount() const
;  void setAvaliableRoomCount (qlonglong avaliableRoomCount);

 QDateTime getCheckinDate() const
;  void setCheckinDate (QDateTime checkinDate);

 QDateTime getCheckoutDate() const
;  void setCheckoutDate (QDateTime checkoutDate);

 QString getFailedReason() const
;  void setFailedReason (QString failedReason);

 QString getMessageId() const
;  void setMessageId (QString messageId);

 QString getResult() const
;  void setResult (QString result);

 QString getRoomQuotas() const
;  void setRoomQuotas (QString roomQuotas);

 qlonglong getTotalRoomPrice() const
;  void setTotalRoomPrice (qlonglong totalRoomPrice);


  virtual HotelRoomQuotasQueryFeedbackResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 选中日期范围内的最大可用房量
 **/
  qlonglong avaliableRoomCount;

/**
 * @brief 入住酒店的日期
 **/
  QDateTime checkinDate;

/**
 * @brief 离开酒店的日期
 **/
  QDateTime checkoutDate;

/**
 * @brief 失败原因,当result为F时,此项为必填,最长200个字符
 **/
  QString failedReason;

/**
 * @brief 指令消息中的messageid,最长128字符
 **/
  QString messageId;

/**
 * @brief 预订结果  
S:成功 
F:失败
 **/
  QString result;

/**
 * @brief 从入住时期到离店日期的每日一间房价与预定房量,JSON格式传递。 date：代表房态日期，格式为YYYY-MM-DD， price：代表当天房价，0～99999900，存储的单位是分，货币单位为人民币，num：代表当天剩余房量，0～999，所有日期的预订间数应该一致。 如： [{"date":2011-01-28,"price":10000, "num":10},{"date":2011-01-29,"price":12000,"num":10}],最长1500个字符
 **/
  QString roomQuotas;

/**
 * @brief 订单总价。0～99999999的正整数。货币单位为人民币。
 **/
  qlonglong totalRoomPrice;

};

#endif  /* HOTELROOMQUOTASQUERYFEEDBACKREQUEST_H */
