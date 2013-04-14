#ifndef ITEMIMGUPLOADRESPONSE_H
#define ITEMIMGUPLOADRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ItemImg.h>


/**
 * @brief TOP RESPONSE API: 添加一张商品图片到num_iid指定的商品中  
传入的num_iid所对应的商品必须属于当前会话的用户  
如果更新图片需要设置itemimg_id，且该itemimg_id的图片记录需要属于传入的num_iid对应的商品。如果新增图片则不用设置  
商品图片有数量和大小上的限制，根据卖家享有的服务（如：卖家订购了多图服务等），商品图片数量限制不同。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemImgUploadResponse : public TaoResponse
{
public:
 virtual ~ItemImgUploadResponse() { }

  ItemImg getItemImg() const;
  void setItemImg (ItemImg itemImg);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 商品图片结构
 **/
  ItemImg itemImg;

};

#endif
