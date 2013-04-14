#ifndef VIDEO_H
#define VIDEO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 商品视频关联记录
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Video : public TaoDomain
{

public:
 virtual ~Video() { }

  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  qlonglong getId() const;
  void setId (qlonglong id);
  QString getIid() const;
  void setIid (QString iid);
  QDateTime getModified() const;
  void setModified (QDateTime modified);
  qlonglong getNumIid() const;
  void setNumIid (qlonglong numIid);
  QString getUrl() const;
  void setUrl (QString url);
  qlonglong getVideoId() const;
  void setVideoId (qlonglong videoId);
  
  virtual void parseResponse();

private:
/**
 * @brief 视频关联记录创建时间（格式：yyyy-MM-dd HH:mm:ss）
 **/
  QDateTime created;

/**
 * @brief 视频关联记录的id，和商品相对应
 **/
  qlonglong id;

/**
 * @brief 视频记录关联的商品的数字id(注意：iid近期即将废弃，请用num_iid参数)
 **/
  QString iid;

/**
 * @brief 视频关联记录修改时间（格式：yyyy-MM-dd HH:mm:ss）
 **/
  QDateTime modified;

/**
 * @brief 视频记录所关联的商品的数字id
 **/
  qlonglong numIid;

/**
 * @brief video的url连接地址。淘秀里视频记录里面存储的url地址
 **/
  QString url;

/**
 * @brief video的id，对应于视频在淘秀的存储记录
 **/
  qlonglong videoId;

};

#endif  /* VIDEO_H */
