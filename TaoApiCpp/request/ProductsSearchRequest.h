#ifndef PRODUCTSSEARCHREQUEST_H
#define PRODUCTSSEARCHREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ProductsSearchResponse.h>

/**
 * TOP API: 只有天猫商家发布商品时才需要用到； 
两种方式搜索所有产品信息(二种至少传一种):  
传入关键字q搜索  
传入cid和props搜索  
返回值支持:product_id,name,pic_path,cid,props,price,tsc 
当用户指定了cid并且cid为垂直市场（3C电器城、鞋城）的类目id时，默认只返回小二确认的产品。如果用户没有指定cid，或cid为普通的类目，默认返回商家确认或小二确认的产品。如果用户自定了status字段，以指定的status类型为准
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ProductsSearchRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCid() const
;  void setCid (qlonglong cid);

 QString getFields() const
;  void setFields (QString fields);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QString getProps() const
;  void setProps (QString props);

 QString getQ() const
;  void setQ (QString q);

 QString getStatus() const
;  void setStatus (QString status);

 qlonglong getVerticalMarket() const
;  void setVerticalMarket (qlonglong verticalMarket);


  virtual ProductsSearchResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 商品类目ID.调用taobao.itemcats.get获取.
 **/
  qlonglong cid;

/**
 * @brief 需返回的字段列表.可选值:Product数据结构中的以下字段:product_id,name,pic_url,cid,props,price,tsc;多个字段之间用","分隔.新增字段status(product的当前状态)
 **/
  QString fields;

/**
 * @brief 页码.传入值为1代表第一页,传入值为2代表第二页,依此类推.默认返回的数据是从第一页开始.
 **/
  qlonglong pageNo;

/**
 * @brief 每页条数.每页返回最多返回100条,默认值为40.
 **/
  qlonglong pageSize;

/**
 * @brief 属性,属性值的组合.格式:pid:vid;pid:vid;调用taobao.itemprops.get获取类目属性pid  
,再用taobao.itempropvalues.get取得vid.
 **/
  QString props;

/**
 * @brief 搜索的关键词是用来搜索产品的title.　注:q,cid和props至少传入一个
 **/
  QString q;

/**
 * @brief 想要获取的产品的状态列表，支持多个状态并列获取，多个状态之间用","分隔，最多同时指定5种状态。例如，只获取小二确认的spu传入"3",只要商家确认的传入"0"，既要小二确认又要商家确认的传入"0,3"。目前只支持者两种类型的状态搜索，输入其他状态无效。
 **/
  QString status;

/**
 * @brief 传入值为：3表示3C表示3C垂直市场产品，4表示鞋城垂直市场产品，8表示网游垂直市场产品。一次只能指定一种垂直市场类型
 **/
  qlonglong verticalMarket;

};

#endif  /* PRODUCTSSEARCHREQUEST_H */
