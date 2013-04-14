#ifndef PRODUCTSGETREQUEST_H
#define PRODUCTSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ProductsGetResponse.h>

/**
 * TOP API: 根据淘宝会员帐号搜索所有产品信息，只有天猫商家发布商品时才需要用到。  
注意：支持分页，每页最多返回100条,默认值为40,页码从1开始，默认为第一页
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ProductsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 QString getNick() const
;  void setNick (QString nick);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);


  virtual ProductsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需返回的字段列表.可选值:Product数据结构中的所有字段;多个字段之间用","分隔
 **/
  QString fields;

/**
 * @brief 用户昵称
 **/
  QString nick;

/**
 * @brief 页码.传入值为1代表第一页,传入值为2代表第二页,依此类推.默认返回的数据是从第一页开始.
 **/
  qlonglong pageNo;

/**
 * @brief 每页条数.每页返回最多返回100条,默认值为40
 **/
  qlonglong pageSize;

};

#endif  /* PRODUCTSGETREQUEST_H */
