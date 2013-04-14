#ifndef PICTURECATEGORYADDRESPONSE_H
#define PICTURECATEGORYADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/PictureCategory.h>


/**
 * @brief TOP RESPONSE API: 同一卖家最多添加500个图片分类，图片分类名称长度最大为20个字符
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureCategoryAddResponse : public TaoResponse
{
public:
 virtual ~PictureCategoryAddResponse() { }

  PictureCategory getPictureCategory() const;
  void setPictureCategory (PictureCategory pictureCategory);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 图片分类信息
 **/
  PictureCategory pictureCategory;

};

#endif
