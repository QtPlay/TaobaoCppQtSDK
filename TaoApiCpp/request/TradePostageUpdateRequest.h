#ifndef TRADEPOSTAGEUPDATEREQUEST_H
#define TRADEPOSTAGEUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TradePostageUpdateResponse.h>

/**
 * TOP API: 修改订单邮费接口，通过传入订单编号和邮费价格，修改订单的邮费，返回修改时间modified,邮费post_fee,总费用total_fee。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradePostageUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getPostFee() const
;  void setPostFee (QString postFee);

 qlonglong getTid() const
;  void setTid (qlonglong tid);


  virtual TradePostageUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 邮费价格(邮费单位是元）
 **/
  QString postFee;

/**
 * @brief 主订单编号
 **/
  qlonglong tid;

};

#endif  /* TRADEPOSTAGEUPDATEREQUEST_H */
