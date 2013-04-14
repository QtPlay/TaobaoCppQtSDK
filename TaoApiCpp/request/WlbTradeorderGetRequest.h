#ifndef WLBTRADEORDERGETREQUEST_H
#define WLBTRADEORDERGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbTradeorderGetResponse.h>

/**
 * TOP API: 根据交易类型和交易id查询物流宝订单详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbTradeorderGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getTradeId() const
;  void setTradeId (QString tradeId);

 QString getTradeType() const
;  void setTradeType (QString tradeType);


  virtual WlbTradeorderGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 指定交易类型的交易号
 **/
  QString tradeId;

/**
 * @brief 交易类型: 
TAOBAO--淘宝交易 
PAIPAI--拍拍交易 
YOUA--有啊交易
 **/
  QString tradeType;

};

#endif  /* WLBTRADEORDERGETREQUEST_H */
