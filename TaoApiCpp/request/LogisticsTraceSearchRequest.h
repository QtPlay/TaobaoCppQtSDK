#ifndef LOGISTICSTRACESEARCHREQUEST_H
#define LOGISTICSTRACESEARCHREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/LogisticsTraceSearchResponse.h>

/**
 * TOP API: 用户根据淘宝交易号查询物流流转信息，如2010-8-10 15：23：00到达杭州集散地。 
此接口的返回信息都由物流公司提供。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsTraceSearchRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getSellerNick() const
;  void setSellerNick (QString sellerNick);

 qlonglong getTid() const
;  void setTid (qlonglong tid);


  virtual LogisticsTraceSearchResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 卖家昵称
 **/
  QString sellerNick;

/**
 * @brief 淘宝交易号，请勿传非淘宝交易号
 **/
  qlonglong tid;

};

#endif  /* LOGISTICSTRACESEARCHREQUEST_H */
