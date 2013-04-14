#ifndef PICURL_H
#define PICURL_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 图片链接
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PicUrl : public TaoDomain
{

public:
 virtual ~PicUrl() { }

  QString getUrl() const;
  void setUrl (QString url);
  
  virtual void parseResponse();

private:
/**
 * @brief 图片链接地址
 **/
  QString url;

};

#endif  /* PICURL_H */
