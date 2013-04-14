#ifndef PRODUCTGETREQUEST_H
#define PRODUCTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ProductGetResponse.h>

/**
 * TOP API: 两种方式查看一个产品详细信息:  
传入product_id来查询  
传入cid和props来查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ProductGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCid() const
;  void setCid (qlonglong cid);

 QString getFields() const
;  void setFields (QString fields);

 qlonglong getProductId() const
;  void setProductId (qlonglong productId);

 QString getProps() const
;  void setProps (QString props);


  virtual ProductGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品类目id.调用taobao.itemcats.get获取;必须是叶子类目id,如果没有传product_id,那么cid和props必须要传.
 **/
  qlonglong cid;

/**
 * @brief 需返回的字段列表.可选值:Product数据结构中的所有字段;多个字段之间用","分隔.
 **/
  QString fields;

/**
 * @brief Product的id.两种方式来查看一个产品:1.传入product_id来查询 2.传入cid和props来查询
 **/
  qlonglong productId;

/**
 * @brief 比如:诺基亚N73这个产品的关键属性列表就是:品牌:诺基亚;型号:N73,对应的PV值就是10005:10027;10006:29729.
 **/
  QString props;

};

#endif  /* PRODUCTGETREQUEST_H */
