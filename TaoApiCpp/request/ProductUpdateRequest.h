#ifndef PRODUCTUPDATEREQUEST_H
#define PRODUCTUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ProductUpdateResponse.h>

/**
 * TOP API: 传入产品ID  
可修改字段：outer_id,binds,sale_props,name,price,desc,image  
注意：1.可以修改主图,不能修改子图片,主图最大500K,目前仅支持GIF,JPG 
      2.商城卖家产品发布24小时后不能作删除或修改操作
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ProductUpdateRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getBinds() const
;  void setBinds (QString binds);

 QString getDesc() const
;  void setDesc (QString desc);

 FileItem getImage() const
;  void setImage (FileItem image);

 bool getMajor() const
;  void setMajor (bool major);

 QString getName() const
;  void setName (QString name);

 QString getNativeUnkeyprops() const
;  void setNativeUnkeyprops (QString nativeUnkeyprops);

 QString getOuterId() const
;  void setOuterId (QString outerId);

 QString getPackingList() const
;  void setPackingList (QString packingList);

 QString getPrice() const
;  void setPrice (QString price);

 qlonglong getProductId() const
;  void setProductId (qlonglong productId);

 QString getSaleProps() const
;  void setSaleProps (QString saleProps);


  virtual ProductUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 非关键属性.调用taobao.itemprops.get获取pid,调用taobao.itempropvalues.get获取vid;格式:pid:vid;pid:vid
 **/
  QString binds;

/**
 * @brief 产品描述.最大25000个字节
 **/
  QString desc;

/**
 * @brief 产品主图.最大500K,目前仅支持GIF,JPG
 **/
  FileItem image;

/**
 * @brief 是否是主图
 **/
  bool major;

/**
 * @brief 产品名称.最大60个字节
 **/
  QString name;

/**
 * @brief 自定义非关键属性
 **/
  QString nativeUnkeyprops;

/**
 * @brief 外部产品ID
 **/
  QString outerId;

/**
 * @brief 保证清单。
 **/
  QString packingList;

/**
 * @brief 产品市场价.精确到2位小数;单位为元.如:200.07
 **/
  QString price;

/**
 * @brief 产品ID
 **/
  qlonglong productId;

/**
 * @brief 销售属性.调用taobao.itemprops.get获取pid,调用taobao.itempropvalues.get获取vid;格式:pid:vid;pid:vid
 **/
  QString saleProps;

};

#endif  /* PRODUCTUPDATEREQUEST_H */
