#ifndef PICTUREGETRESPONSE_H
#define PICTUREGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Picture.h>


/**
 * @brief TOP RESPONSE API: 获取图片信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PictureGetResponse : public TaoResponse
{
public:
 virtual ~PictureGetResponse() { }

  QList<Picture> getPictures() const;
  void setPictures (QList<Picture> pictures);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 图片信息列表
 **/
  QList<Picture> pictures;

/**
 * @brief 总的结果数
 **/
  qlonglong totalResults;

};

#endif
