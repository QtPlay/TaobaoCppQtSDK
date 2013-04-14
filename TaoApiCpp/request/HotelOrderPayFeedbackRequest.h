#ifndef HOTELORDERPAYFEEDBACKREQUEST_H
#define HOTELORDERPAYFEEDBACKREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/HotelOrderPayFeedbackResponse.h>

/**
 * TOP API: 支付确认结果回传
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class HotelOrderPayFeedbackRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFailedReason() const
;  void setFailedReason (QString failedReason);

 QString getMessageId() const
;  void setMessageId (QString messageId);

 qlonglong getOid() const
;  void setOid (qlonglong oid);

 QString getOutOid() const
;  void setOutOid (QString outOid);

 QString getResult() const
;  void setResult (QString result);

 qlonglong getSessionId() const
;  void setSessionId (qlonglong sessionId);


  virtual HotelOrderPayFeedbackResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 失败原因,当result为failed时,此项为必填，最长200个字符
 **/
  QString failedReason;

/**
 * @brief 指令消息中的messageid,最长128字符
 **/
  QString messageId;

/**
 * @brief 酒店订单id
 **/
  qlonglong oid;

/**
 * @brief 合作方订单号,最长250个字符
 **/
  QString outOid;

/**
 * @brief 预订结果  
S:成功 
F:失败
 **/
  QString result;

/**
 * @brief 指令消息中的session_id
 **/
  qlonglong sessionId;

};

#endif  /* HOTELORDERPAYFEEDBACKREQUEST_H */
