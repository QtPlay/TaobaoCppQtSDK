#ifndef ITEMSKUADDREQUEST_H
#define ITEMSKUADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemSkuAddResponse.h>

/**
 * TOP API: 新增一个sku到num_iid指定的商品中  
传入的iid所对应的商品必须属于当前会话的用户
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemSkuAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getItemPrice() const
;  void setItemPrice (QString itemPrice);

 QString getLang() const
;  void setLang (QString lang);

 qlonglong getNumIid() const
;  void setNumIid (qlonglong numIid);

 QString getOuterId() const
;  void setOuterId (QString outerId);

 QString getPrice() const
;  void setPrice (QString price);

 QString getProperties() const
;  void setProperties (QString properties);

 qlonglong getQuantity() const
;  void setQuantity (qlonglong quantity);

 QString getSpecId() const
;  void setSpecId (QString specId);


  virtual ItemSkuAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief sku所属商品的价格。当用户新增sku，使商品价格不属于sku价格之间的时候，用于修改商品的价格，使sku能够添加成功
 **/
  QString itemPrice;

/**
 * @brief Sku文字的版本。可选值:zh_HK(繁体),zh_CN(简体);默认值:zh_CN
 **/
  QString lang;

/**
 * @brief Sku所属商品数字id，可通过 taobao.item.get 获取。必选
 **/
  qlonglong numIid;

/**
 * @brief Sku的商家外部id
 **/
  QString outerId;

/**
 * @brief Sku的销售价格。商品的价格要在商品所有的sku的价格之间。精确到2位小数;单位:元。如:200.07，表示:200元7分
 **/
  QString price;

/**
 * @brief Sku属性串。格式:pid:vid;pid:vid,如:1627207:3232483;1630696:3284570,表示:机身颜色:军绿色;手机套餐:一电一充。 
如果包含自定义属性则格式为pid:vid;pid2:vid2;$pText:vText , 其中$pText:vText为自定义属性。限制：其中$pText的‘$’前缀不能少，且pText和vText文本中不可以存在 冒号:和分号;以及逗号，
 **/
  QString properties;

/**
 * @brief Sku的库存数量。sku的总数量应该小于等于商品总数量(Item的NUM)。取值范围:大于零的整数
 **/
  qlonglong quantity;

/**
 * @brief 产品的规格信息
 **/
  QString specId;

};

#endif  /* ITEMSKUADDREQUEST_H */
