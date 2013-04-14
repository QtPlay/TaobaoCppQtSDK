#ifndef ITEMPROPIMGUPLOADRESPONSE_H
#define ITEMPROPIMGUPLOADRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/PropImg.h>


/**
 * @brief TOP RESPONSE API: 添加一张商品属性图片到num_iid指定的商品中  
传入的num_iid所对应的商品必须属于当前会话的用户  
图片的属性必须要是颜色的属性，这个在前台显示的时候需要和sku进行关联的  
商品属性图片只有享有服务的卖家（如：淘宝大卖家、订购了淘宝多图服务的卖家）才能上传  
商品属性图片有数量和大小上的限制，最多不能超过24张（每个颜色属性都有一张）。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemPropimgUploadResponse : public TaoResponse
{
public:
 virtual ~ItemPropimgUploadResponse() { }

  PropImg getPropImg() const;
  void setPropImg (PropImg propImg);
  virtual void parseNormalResponse();

 private:
/**
 * @brief PropImg属性图片结构
 **/
  PropImg propImg;

};

#endif
