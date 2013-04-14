#ifndef TRADECLOSEREQUEST_H
#define TRADECLOSEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TradeCloseResponse.h>

/**
 * TOP API: 关闭一笔订单，可以是主订单或子订单。当订单从创建到关闭时间小于10s的时候，会报“CLOSE_TRADE_TOO_FAST”错误。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeCloseRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getCloseReason() const
;  void setCloseReason (QString closeReason);

 qlonglong getTid() const
;  void setTid (qlonglong tid);


  virtual TradeCloseResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 交易关闭原因。可以选择的理由有：
1.未及时付款
2.买家联系不上
3.谢绝还价
4.商品瑕疵
5.协商不一致
6.买家不想买
7.与买家协商一致
 **/
  QString closeReason;

/**
 * @brief 主订单或子订单编号。
 **/
  qlonglong tid;

};

#endif  /* TRADECLOSEREQUEST_H */
