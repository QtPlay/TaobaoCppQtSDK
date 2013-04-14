#ifndef TRADEMEMOADDREQUEST_H
#define TRADEMEMOADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TradeMemoAddResponse.h>

/**
 * TOP API: 根据登录用户的身份（买家或卖家），自动添加相应的交易备注,不能重复调用些接口添加备注，需要更新备注请用taobao.trade.memo.update
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeMemoAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getFlag() const
;  void setFlag (qlonglong flag);

 QString getMemo() const
;  void setMemo (QString memo);

 qlonglong getTid() const
;  void setTid (qlonglong tid);


  virtual TradeMemoAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 交易备注旗帜，可选值为：0(灰色), 1(红色), 2(黄色), 3(绿色), 4(蓝色), 5(粉红色)，默认值为0
 **/
  qlonglong flag;

/**
 * @brief 交易备注。最大长度: 1000个字节
 **/
  QString memo;

/**
 * @brief 交易编号
 **/
  qlonglong tid;

};

#endif  /* TRADEMEMOADDREQUEST_H */
