#ifndef PICTURECATEGORYGETRESPONSE_H
#define PICTURECATEGORYGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/PictureCategory.h>


/**
 * @brief TOP RESPONSE API: 获取图片分类信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureCategoryGetResponse : public TaoResponse
{
public:
 virtual ~PictureCategoryGetResponse() { }

  QList<PictureCategory> getPictureCategories() const;
  void setPictureCategories (QList<PictureCategory> pictureCategories);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 图片分类
 **/
  QList<PictureCategory> pictureCategories;

};

#endif
