#ifndef ELECTEDITEMSSEARCHREQUEST_H
#define ELECTEDITEMSSEARCHREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ElectedItemsSearchResponse.h>

/**
 * TOP API: 获取天猫各类目下精选商品列表。在得到商品ID列表后，再调用taobao.item.get获取商品详情，再调用taobao.taobaoke.items.convert 获取有佣金的淘客推广链接
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ElectedItemsSearchRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCid() const
;  void setCid (qlonglong cid);


  virtual ElectedItemsSearchResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 后台类目ID，支持父类目或叶子类目，可以通过taobao.itemcats.get 获取到后台类目ID列表
 **/
  qlonglong cid;

};

#endif  /* ELECTEDITEMSSEARCHREQUEST_H */
