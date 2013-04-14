#ifndef ROOMIMAGE_H
#define ROOMIMAGE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief RoomImage（酒店图片）结构。各字段详细说明可参考接口定义，如：商品图片上传接口。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class RoomImage : public TaoDomain
{

public:
 virtual ~RoomImage() { }

  QString getAllImages() const;
  void setAllImages (QString allImages);
  qlonglong getGid() const;
  void setGid (qlonglong gid);
  QString getImage() const;
  void setImage (QString image);
  qlonglong getPosition() const;
  void setPosition (qlonglong position);
  
  virtual void parseResponse();

private:
/**
 * @brief 商品所有图片的url，用”,”隔开。即，当前该商品的所有图片地址。
 **/
  QString allImages;

/**
 * @brief 酒店商品id
 **/
  qlonglong gid;

/**
 * @brief 图片url。当前接口操作的图片url。调用上传图片接口时，代表上传图片后得到的图片url。调用删除图片接口时，代表被删除掉的图片url。
 **/
  QString image;

/**
 * @brief 图片位置，可选值：1,2,3,4,5。代表图片的位置，如：2，代表第二张图片。
 **/
  qlonglong position;

};

#endif  /* ROOMIMAGE_H */
