#ifndef SELLERCATSLISTADDREQUEST_H
#define SELLERCATSLISTADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SellercatsListAddResponse.h>

/**
 * TOP API: 此API添加卖家店铺内自定义类目  
父类目parent_cid值等于0：表示此类目为店铺下的一级类目，值不等于0：表示此类目有父类目  
注：因为缓存的关系,添加的新类目需8个小时后才可以在淘宝页面上正常显示，但是不影响在该类目下商品发布
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SellercatsListAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getName() const
;  void setName (QString name);

 qlonglong getParentCid() const
;  void setParentCid (qlonglong parentCid);

 QString getPictUrl() const
;  void setPictUrl (QString pictUrl);

 qlonglong getSortOrder() const
;  void setSortOrder (qlonglong sortOrder);


  virtual SellercatsListAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 卖家自定义类目名称。不超过20个字符
 **/
  QString name;

/**
 * @brief 父类目编号，如果类目为店铺下的一级类目：值等于0，如果类目为子类目，调用获取taobao.sellercats.list.get父类目编号
 **/
  qlonglong parentCid;

/**
 * @brief 链接图片URL地址。(绝对地址，格式：http://host/image_path)
 **/
  QString pictUrl;

/**
 * @brief 该类目在页面上的排序位置,取值范围:大于零的整数
 **/
  qlonglong sortOrder;

};

#endif  /* SELLERCATSLISTADDREQUEST_H */
