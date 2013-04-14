#ifndef ITEMIMG_H
#define ITEMIMG_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief ItemImg结构
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemImg : public TaoDomain
{

public:
 virtual ~ItemImg() { }

  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  qlonglong getId() const;
  void setId (qlonglong id);
  qlonglong getPosition() const;
  void setPosition (qlonglong position);
  QString getUrl() const;
  void setUrl (QString url);
  
  virtual void parseResponse();

private:
/**
 * @brief 图片创建时间 时间格式：yyyy-MM-dd HH:mm:ss
 **/
  QDateTime created;

/**
 * @brief 商品图片的id，和商品相对应（主图id默认为0）
 **/
  qlonglong id;

/**
 * @brief 图片放在第几张（多图时可设置）
 **/
  qlonglong position;

/**
 * @brief 图片链接地址
 **/
  QString url;

};

#endif  /* ITEMIMG_H */
