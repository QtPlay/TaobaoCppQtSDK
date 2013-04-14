#ifndef ITEMPROPIMGUPLOADREQUEST_H
#define ITEMPROPIMGUPLOADREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemPropimgUploadResponse.h>

/**
 * TOP API: 添加一张商品属性图片到num_iid指定的商品中  
传入的num_iid所对应的商品必须属于当前会话的用户  
图片的属性必须要是颜色的属性，这个在前台显示的时候需要和sku进行关联的  
商品属性图片只有享有服务的卖家（如：淘宝大卖家、订购了淘宝多图服务的卖家）才能上传  
商品属性图片有数量和大小上的限制，最多不能超过24张（每个颜色属性都有一张）。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemPropimgUploadRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getId() const
;  void setId (qlonglong id);

 FileItem getImage() const
;  void setImage (FileItem image);

 qlonglong getNumIid() const
;  void setNumIid (qlonglong numIid);

 qlonglong getPosition() const
;  void setPosition (qlonglong position);

 QString getProperties() const
;  void setProperties (QString properties);


  virtual ItemPropimgUploadResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 属性图片ID。如果是新增不需要填写
 **/
  qlonglong id;

/**
 * @brief 属性图片内容。类型:JPG,GIF;最大长度:500K;图片大小不超过:1M
 **/
  FileItem image;

/**
 * @brief 商品数字ID，必选
 **/
  qlonglong numIid;

/**
 * @brief 图片位置
 **/
  qlonglong position;

/**
 * @brief 属性列表。调用taobao.itemprops.get获取类目属性，属性必须是颜色属性，再用taobao.itempropvalues.get取得vid。格式:pid:vid。
 **/
  QString properties;

};

#endif  /* ITEMPROPIMGUPLOADREQUEST_H */
