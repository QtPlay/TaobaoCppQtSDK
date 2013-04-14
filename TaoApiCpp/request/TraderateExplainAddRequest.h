#ifndef TRADERATEEXPLAINADDREQUEST_H
#define TRADERATEEXPLAINADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TraderateExplainAddResponse.h>

/**
 * TOP API: 商城卖家给评价做出解释（买家追加评论后、评价超过30天的，都不能再做评价解释）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TraderateExplainAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getOid() const
;  void setOid (qlonglong oid);

 QString getReply() const
;  void setReply (QString reply);


  virtual TraderateExplainAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 子订单ID
 **/
  qlonglong oid;

/**
 * @brief 评价解释内容,最大长度: 500个汉字
 **/
  QString reply;

};

#endif  /* TRADERATEEXPLAINADDREQUEST_H */
