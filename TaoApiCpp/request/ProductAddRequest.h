#ifndef PRODUCTADDREQUEST_H
#define PRODUCTADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ProductAddResponse.h>

/**
 * TOP API: 获取类目ID，必需是叶子类目ID；调用taobao.itemcats.get.v2获取  
传入关键属性,结构:pid:vid;pid:vid.调用taobao.itemprops.get.v2获取pid, 
调用taobao.itempropvalues.get获取vid;如果碰到用户自定义属性,请用customer_props.
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ProductAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getBinds() const
;  void setBinds (QString binds);

 qlonglong getCid() const
;  void setCid (qlonglong cid);

 QString getCustomerProps() const
;  void setCustomerProps (QString customerProps);

 QString getDesc() const
;  void setDesc (QString desc);

 FileItem getImage() const
;  void setImage (FileItem image);

 bool getMajor() const
;  void setMajor (bool major);

 QDateTime getMarketTime() const
;  void setMarketTime (QDateTime marketTime);

 QString getName() const
;  void setName (QString name);

 QString getOuterId() const
;  void setOuterId (QString outerId);

 QString getPackingList() const
;  void setPackingList (QString packingList);

 QString getPrice() const
;  void setPrice (QString price);

 QString getPropertyAlias() const
;  void setPropertyAlias (QString propertyAlias);

 QString getProps() const
;  void setProps (QString props);

 QString getSaleProps() const
;  void setSaleProps (QString saleProps);


  virtual ProductAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 非关键属性结构:pid:vid;pid:vid.<br>
非关键属性<font color=red>不包含</font>关键属性、销售属性、用户自定义属性、商品属性;
<br>调用taobao.itemprops.get获取pid,调用taobao.itempropvalues.get获取vid.<br><font color=red>注:支持最大长度为512字节</font>
 **/
  QString binds;

/**
 * @brief 商品类目ID.调用taobao.itemcats.get获取;注意:必须是叶子类目 id.
 **/
  qlonglong cid;

/**
 * @brief 用户自定义属性,结构：pid1:value1;pid2:value2，如果有型号，系列等子属性用: 隔开 例如：“20000:优衣库:型号:001;632501:1234”，表示“品牌:优衣库:型号:001;货号:1234”
<br><font color=red>注：包含所有自定义属性的传入</font>
 **/
  QString customerProps;

/**
 * @brief 产品描述.最大25000个字节
 **/
  QString desc;

/**
 * @brief 产品主图片.最大1M,目前仅支持GIF,JPG.
 **/
  FileItem image;

/**
 * @brief 是不是主图
 **/
  bool major;

/**
 * @brief 上市时间。目前只支持鞋城类目传入此参数
 **/
  QDateTime marketTime;

/**
 * @brief 产品名称,最大60个字节.
 **/
  QString name;

/**
 * @brief 外部产品ID
 **/
  QString outerId;

/**
 * @brief 包装清单。注意，在管控类目下，包装清单不能为空，同时保证清单的格式为： 
名称:数字;名称:数字; 
其中，名称不能违禁、不能超过60字符，数字不能超过999
 **/
  QString packingList;

/**
 * @brief 产品市场价.精确到2位小数;单位为元.如：200.07
 **/
  QString price;

/**
 * @brief 销售属性值别名。格式为pid1:vid1:alias1;pid1:vid2:alia2。只有少数销售属性值支持传入别名，比如颜色和尺寸
 **/
  QString propertyAlias;

/**
 * @brief 关键属性 结构:pid:vid;pid:vid.调用taobao.itemprops.get获取pid,调用taobao.itempropvalues.get获取vid;如果碰到用户自定义属性,请用customer_props.
 **/
  QString props;

/**
 * @brief 销售属性结构:pid:vid;pid:vid.调用taobao.itemprops.get获取is_sale_prop＝true的pid,调用taobao.itempropvalues.get获取vid.
 **/
  QString saleProps;

};

#endif  /* PRODUCTADDREQUEST_H */
