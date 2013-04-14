#ifndef TRIPJIPIAOAGENTITINERARYSENDREQUEST_H
#define TRIPJIPIAOAGENTITINERARYSENDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TripJipiaoAgentItinerarySendResponse.h>

/**
 * TOP API: 国内机票代理商行程单信息回填
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TripJipiaoAgentItinerarySendRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getCompanyCode() const
;  void setCompanyCode (QString companyCode);

 QString getExpressCode() const
;  void setExpressCode (QString expressCode);

 qlonglong getItineraryId() const
;  void setItineraryId (qlonglong itineraryId);

 QString getItineraryNo() const
;  void setItineraryNo (QString itineraryNo);

 QString getSendDate() const
;  void setSendDate (QString sendDate);


  virtual TripJipiaoAgentItinerarySendResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 物流公司代码CODE，如不清楚，请找运营提供
 **/
  QString companyCode;

/**
 * @brief 邮寄单号，长度不能超过32字节
 **/
  QString expressCode;

/**
 * @brief 淘宝系统行程单唯一键
 **/
  qlonglong itineraryId;

/**
 * @brief 行程单号
 **/
  QString itineraryNo;

/**
 * @brief 邮寄日期，格式yyyy-mm-dd
 **/
  QString sendDate;

};

#endif  /* TRIPJIPIAOAGENTITINERARYSENDREQUEST_H */
